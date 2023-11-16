#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
struct SanPham{

    string id;
    string name;
    long long sellPrice;
    long long guaranteeMonth;
    
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
    fstream file;
    long long n;
    file.open("SANPHAM.in", ios::in);
    file >> n;
    // scanf("\n"); // or file.ignore(
    file.ignore();
    vector<SanPham> a(n);
    for (long long i = 0; i < n; i++) {
        getline(file, a[i].id);
        getline(file,a[i].name);
        file >> a[i].sellPrice >> a[i].guaranteeMonth;
        file.ignore();
    }
    sort(a.begin(), a.end(), cmp);
    for (long long i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].sellPrice << " " << a[i].guaranteeMonth << endl;
    }
    file.close();
}