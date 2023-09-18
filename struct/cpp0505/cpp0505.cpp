#include <iostream>
using namespace std;
struct NhanVien {
    string name;
    string gender;
    string dob;
    string address;
    string tax;
    string day;
};
void standardDate(string &dob) {
    if (dob[2] != '/') {
        dob.insert(0, "0");
    }
    if (dob[5] != '/') {
        dob.insert(3, "0");
    }
}
void nhap(NhanVien &a) {
    getline(cin , a.name);
    cin >> a.gender;
    cin >> a.dob;
    cin.ignore();
    getline(cin, a.address);
    // cin >> a.address;
    cin >> a.tax;
    cin >> a.day;
    standardDate(a.dob);
    standardDate(a.day);
}
void in(NhanVien a) {
    cout << "00001 " << a.name << " " << a.gender <<" "<< a.dob << " " << a.address << " " << a.tax << " " << a.day;
}

// void in(SinhVien a) {

// }
int main () {
    #ifndef ONLINE_JUDGE
    freopen("cpp0505_input.txt", "r", stdin);
    freopen("cpp0505_output.txt", "w", stdout);
    #endif
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;    
}