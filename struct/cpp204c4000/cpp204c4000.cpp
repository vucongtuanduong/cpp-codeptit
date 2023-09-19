#include <iostream>
#include <iomanip>
using namespace std;
struct SinhVien{
    string id = "N20DCCN001",name, lop, dob;
    float gpa;
};
void nhapThongTinSV(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.lop;
    cin >> a.dob;
    if (a.dob[2] != '/') {
        a.dob.insert(0, "0");
    } 
    if (a.dob[5] != '/') {
        a.dob.insert(3, "0");
    }
    cin >> a.gpa;
}
void inThongTinSV(SinhVien a) {
    cout << a.id <<"\t" << a.name << "\t" << a.lop << "\t" << a.dob << "\t" << fixed << setprecision(2) << a.gpa;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
	struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}