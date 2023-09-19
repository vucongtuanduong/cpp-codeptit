#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b=  r;
    }
    return a;
}
// long long lcm(long long a, long long b) {
//     return a * b / gcd(a, b);
// }
class PhanSo{
    private:
        long long numerator;
        long long denominator;
    public:
        PhanSo(long long tu, long long mau) {
            numerator = tu;
            denominator = mau;
        }
        void setNumer(long long n) {
            numerator = n;
        }
        void setDeno(long long n) {
            denominator = n;
        }
        void rutgon() {
            long long ucln = gcd(numerator, denominator);
            numerator /= ucln;
            denominator /= ucln;

        }
    friend istream & operator >> (istream &in, PhanSo &);
    friend ostream & operator << (ostream &out, PhanSo);
};
istream & operator >> (istream &in, PhanSo &p) {
    long long tu, mau;
    in >> tu >> mau;
    p.setNumer(tu);
    p.setDeno(mau);
    return in;
}
ostream & operator << (ostream &out, PhanSo p) {
    out << p.numerator << "/" << p.denominator;
    return out;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}