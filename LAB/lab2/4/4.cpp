#include <iostream>
using namespace std;
struct SoPhuc{
    int thuc;
    int ao;
    
};
SoPhuc tong(SoPhuc a, SoPhuc b) {
        SoPhuc c;
        c.thuc = a.thuc + b.thuc;
        c.ao = a.ao + b.ao;
        return c;
    }
    SoPhuc binh_phuong(SoPhuc a) {
        SoPhuc res;
        res.ao = 2 * a.thuc * a.ao;
        res.thuc = a.thuc * a.thuc - a.ao * a.ao;
        return res;
    }
    SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b) {
        SoPhuc c1 = tong(a, b);
        SoPhuc res = binh_phuong(c1);
        return res;
    }
    void hien_thi(SoPhuc a) {
        if (a.ao < 0) {
            cout << a.thuc << " - " << -1 * a.ao << "i";
        } else if (a.ao == 0) {
            cout << a.thuc << endl;
        } else {
            cout << a.thuc << " + " << a.ao << "i";
        }
    }
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}