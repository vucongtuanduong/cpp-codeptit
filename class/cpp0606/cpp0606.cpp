#include <iostream>
using namespace std;
class NhanVien{
    private:
        string id;
        string name;
        string dob;
        string gender;
        string address;
        string tax;
        string day;
    public:
        NhanVien() {
            id = "00001";
            name = "";
            dob = "";
            gender = "";
            address = "";
            tax = "";
            day = "";
        }
        void nhap() {
            getline(cin, name);
            getline(cin, gender);
            getline(cin, dob);
            getline(cin, address);
            getline(cin, tax);
            getline(cin, day);
        }

        void xuat() {
            cout << id << " " << name << " " << gender << " " << dob << " " << address << " " << tax << " " << day;
        }
    
};

int main(){
    NhanVien a;
    //cin >> a;
    a.nhap();
    //cin >> a;
    a.xuat();
    return 0;
}