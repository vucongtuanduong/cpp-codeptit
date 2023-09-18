#include <iostream>
#include <iomanip>
using namespace std;
struct ThiSinh{
    string name;
    float m1,m2,m3;
    float total_mark; 
    string dob;
};
void nhap(ThiSinh &A) {
    getline(cin , A.name);
    cin >> A.dob;
    cin >> A.m1 >> A.m2 >> A.m3;
    A.total_mark = A.m1 + A.m2 + A.m3;

}
void in(ThiSinh a) {
    cout << a.name << " " << a.dob << " " << fixed << setprecision(1) << a.total_mark;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}