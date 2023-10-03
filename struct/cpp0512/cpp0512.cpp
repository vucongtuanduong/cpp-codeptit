#include <iostream>
using namespace std;
struct PhanSo{
    long long tu;
    long long mau;
};
long long gcd(long long a, long long b) {
    // a = abs(a);
    // b = abs(b);
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
void simplify(PhanSo &a) {
    long long ucln = gcd(a.tu, a.mau);
    a.tu /= ucln;
    a.mau /= ucln;
}
PhanSo cong(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.mau + b.tu * a.mau;
    res.mau = a.mau * b.mau;
    simplify(res);
    return res;
}
PhanSo nhan(PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu * b.tu;
    res.mau = a.mau * b.mau;
    simplify(res);
    if (res.mau < 0) {
        res.tu *= -1;
        res.mau *= -1;
    }
    return res;
}
void in(PhanSo a) {
    cout << a.tu << "/" << a.mau << " ";
}
void process(PhanSo a, PhanSo b) {
    PhanSo tong = cong(a, b);
    PhanSo c = nhan(tong, tong);
    PhanSo d = nhan(nhan(a, b), c);
    in(c);
//    cout << " ";
    in(d);
    cout << endl;
    
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
