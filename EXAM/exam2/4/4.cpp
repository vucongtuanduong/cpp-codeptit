#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SanPham{
    public:
        string id;
        string name;
        long long sellPrice;
        long long guaranteeMonth;
        friend istream &operator >> (istream &in, SanPham &sp) {
            getline(in, sp.id);
            getline(in, sp.name);
            in >> sp.sellPrice >> sp.guaranteeMonth;
            // cout << sp.id  << endl;
            // cout << sp.name << endl;
            // cout << sp.sellPrice << endl;
            // cout << sp.guaranteeMonth << endl;
            // in.ignore();
            return in;
        }
        friend ostream &operator << (ostream &out, SanPham a) {
            out << a.id << " " << a.name << " " << a.sellPrice << " " << a.guaranteeMonth;
            return out;
        }
};
bool cmp(SanPham a, SanPham b) {
    if (a.sellPrice == b.sellPrice) {
        return a.id < b.id;
    }
    return a.sellPrice > b.sellPrice;
}
int main () {
   #ifndef ONLINE_JUDGE
   freopen("output.txt", "w", stdout);
   #endif
    fstream f;
    long long n;
    f.open("SANPHAM.in");
    f >> n;
    // scanf("\n"); // or file.ignore(
    f.ignore();
    SanPham a[1000];

    for (long long i = 0; i < n; i++) {
        getline(f, a[i].id);
        getline(f,a[i].name);
        f>> a[i].sellPrice >> a[i].guaranteeMonth;
        f.ignore();
    }
    stable_sort(a, a + n, cmp);
    for (long long i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].sellPrice << " " << a[i].guaranteeMonth << endl;
    }
    f.close();
}