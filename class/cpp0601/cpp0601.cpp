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
        void nhap() {
            string ten, lop, ngaysinh;
            float diem;
            getline(cin, ten);
            cin >> lop;
            cin >> ngaysinh;
            cin >> diem;
            setId("B20DCCN001");
            setName(ten);
            setDob(ngaysinh);
            setGrade(lop);
            setGpa(diem);
        }
        void xuat() {
            cout << id << " " << name << " " << grade << " " << dob << " " << fixed << setprecision(2) << gpa;
        }
};
int main () {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}