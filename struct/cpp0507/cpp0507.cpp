#include <iostream>
using namespace std;
struct PhanSo {
    long long numerator;
    long long denominator;
};
void nhap(PhanSo &p);
void in(PhanSo p);
PhanSo tong(PhanSo p, PhanSo q);
void rutgon(PhanSo &p);
long long gcd(long long x, long long y);
long long lcm(long long x, long long y);
void nhap(PhanSo &p) {
    cin >> p.numerator >> p.denominator;
}
void in(PhanSo p) {
    cout << p.numerator << "/" << p.denominator;
}
PhanSo tong(PhanSo p, PhanSo q) {
    long long bcnn = lcm(p.denominator, q.denominator);
    // cout << "bcnn: " << bcnn << endl;
    int xp = bcnn / p.denominator;
    // cout << "xp: " << xp << endl;
    int xq = bcnn / q.denominator;
    // cout << "xq: " << xq << endl;
    PhanSo res;
    res.numerator = p.numerator * xp + q.numerator * xq;
    // cout << res.numerator << endl;
    
    res.denominator = bcnn;
    // cout << res.denominator << endl;
    rutgon(res);
    return res;
}
void rutgon(PhanSo &p) {
    long long ucln = gcd(p.numerator, p.denominator);
    p.numerator /= ucln;
    p.denominator /= ucln;
}
long long gcd(long long x, long long y) {
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }
    return x;
}
long long lcm(long long  x, long long y) {
    return x * y / gcd(x, y);
}
int main () {
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
