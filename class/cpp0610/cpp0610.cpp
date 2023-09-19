#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}
class PhanSo{
    private:
        long long numerator;
        long long denominator;
    public:
        PhanSo(long long tu, long long mau) {
            numerator = tu;
            denominator = mau;
        }
        void setNumer(long long tu) {
        	numerator = tu;
		}
		void setDeno(long long mau) {
			denominator = mau;
		}
        PhanSo operator + (PhanSo const &obj) {
            PhanSo res(1,1);
            long long bcnn = lcm(denominator, obj.denominator);
            long long n1 = bcnn / denominator;
            long long n2 = bcnn / obj.denominator;
            res.numerator = numerator * n1 + obj.numerator * n2;
            res.denominator = bcnn;
            //simplify
            long long ucln = gcd(res.numerator, res.denominator);
            res.numerator /= ucln;
            res.denominator /= ucln;
            return res;
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
int main (){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
}