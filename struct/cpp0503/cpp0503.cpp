#include <iostream>
using namespace std;
struct PhanSo {
    long long denominator;
    long long numerator;
};
long long gcd(PhanSo p) {
    while (p.numerator != 0) {
        long long r = p.denominator % p.numerator;
        p.denominator = p.numerator;
        p.numerator = r;

    }
    return p.denominator;
}
void nhap(PhanSo &p) {
    cin >> p.denominator >> p.numerator;
}
void rutgon(PhanSo &p) {
    long long ucln = gcd(p);
    p.denominator /= ucln;
    p.numerator /= ucln;
}
void in(PhanSo p) {
    cout << p.denominator << "/" << p.numerator;
}
int main (){ 
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}