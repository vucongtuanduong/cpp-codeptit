#include <iostream>
#include <iomanip>
using namespace std;
class SinhVien{
    private:
        string id;
        string name;
        string grade;
        string dob;
        float gpa;
    public:
        SinhVien() {
            id = "";
            name = "";
            grade = "";
            dob = "";
            gpa = 0;
        }
        void setName(string input_name) {
            name = input_name;
        }
        void setId(string new_id) {
            id = new_id;
        }
        void setGrade(string lop) {
            grade = lop;
        }
        void setDob(string ngaysinh) {
            if (ngaysinh[1] == '/') {
                ngaysinh.insert(0, "0");
            }
            if (ngaysinh[4] == '/') {
                ngaysinh.insert(3, "0");
            }
            dob = ngaysinh;
        }
        void setGpa(float new_gpa) {
            gpa = new_gpa;
        }
        
        friend istream & operator >> (istream &in , SinhVien&);
        friend ostream & operator << (ostream &out,  SinhVien);
};
istream & operator >> (istream &in , SinhVien &sv) {
    string ten, lop, ngaysinh;
    float diem;
    getline(in, ten);
    in >> lop;
    in >> ngaysinh;
    in >> diem;
    sv.setId("B20DCCN001");
    sv.setName(ten);
    sv.setDob(ngaysinh);
    sv.setGrade(lop);
    sv.setGpa(diem);
    return in;
}
ostream & operator << (ostream &out, const SinhVien sv) {
    out << sv.id << " " << sv.name << " " << sv.grade << " " << sv.dob << " " << fixed << setprecision(2) << sv.gpa;
    return out;
}
// #define a() a
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}