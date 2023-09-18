#include <iostream>
#include <iomanip>
using namespace std;
struct SinhVien{
    string name;
    string myclass;
    string dob;
    float gpa;
};
void nhap(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.myclass;
    cin >> a.dob;
    cin >> a.gpa;
    if (a.dob[2] != '/') {
        a.dob.insert(0, "0");
    }
    if (a.dob[5] != '/') {
        a.dob.insert(3, "0");
    }
}
void in(SinhVien a) {
    cout << "B20DCCN001 " << a.name << " " << a.myclass <<" " << a.dob << " " << fixed << setprecision(2) << a.gpa;
}
int main () {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}