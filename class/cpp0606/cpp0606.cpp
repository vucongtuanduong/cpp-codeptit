#include <iostream>
using namespace std;
class NhanVien{
    private:
        string id = "00001";
        string name;
        string dob;
        string gender;
        string address;
        string tax;
        string day;
    public:
        void setName(string s) {
            name = s;
        }
        void setDob(string s) {
            dob = s;
        }
        void setGender(string s) {
            gender = s;
        }
        void setAddress(string s) {
            address = s;
        }
        void setTax(string s) {
            tax = s;
        }
        void setDay(string s) {
            day = s;
        }
    friend istream & operator >> (istream &in, NhanVien &);
    friend ostream & operator << (ostream &out, NhanVien );
};
istream & operator >> (istream &in, NhanVien &n) {
    string ten,gioitinh, ngaysinh, diachi, mst, ngay;
    getline(in, ten);
    cin >> gioitinh;
    cin >> ngaysinh;
    cin.ignore();
    getline(in, diachi);
    cin >> mst;
    cin.ignore();
    cin >> ngay;
    n.setAddress(diachi);
    n.setDay(ngay);
    n.setDob(ngaysinh);
    n.setGender(gioitinh);
    n.setName(ten);
    n.setTax(mst);
    return in;
}
ostream & operator << (ostream &out, NhanVien n) {
    out << n.id << " " << n.name << " " << n.gender << " " << n.dob << " " << n.address << " " << n.tax << " " << n.day;
    return out;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}