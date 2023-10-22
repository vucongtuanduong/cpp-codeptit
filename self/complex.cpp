#include <iostream>
#include <algorithm>
using namespace std;
struct SoPhuc{
    int thuc;
    int ao;
};
void print(SoPhuc a) {
    if (a.ao > 0) {
        cout << a.thuc << " + " << a.ao << "i" << endl;
        return;
    } else {
        cout << a.thuc << " - " << abs(a.ao) << "i" << endl;
        return;
    }
}
SoPhuc multiply(SoPhuc a, SoPhuc b) {
    SoPhuc c;
    c.thuc = a.thuc * b.thuc - a.ao * b.ao;
    c.ao = a.thuc * b.ao + a.ao * b.thuc;
    return c;
}
int main () {
    
}