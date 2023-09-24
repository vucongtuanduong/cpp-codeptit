#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
struct SinhVien{
    string id, name, lop;
    double m1,m2,m3;
    // int stt;
};
vector<SinhVien> v;
bool sx(SinhVien a, SinhVien b) {
    return a.name < b.name;
}
void nhap(SinhVien &n) {
    // cin >> n.id;
    cin.ignore();
    getline(cin, n.id);
    getline(cin , n.name) ;
    getline(cin, n.lop);
    cin >> n.m1 >> n.m2 >> n.m3;
    // n.stt = stoi(n.id.substr(7, 3));
}
void sap_xep(SinhVien *ds, int n) {
    for (int i = 0; i < n; i++) {
        v.push_back(ds[i]);
    }
    sort(v.begin(), v.end(), sx);
}
void in_ds(SinhVien *ds, int n) {
    for (int i = 0; i < v.size(); i++) {
        cout << i + 1 << " " << v[i].id << " " << v[i].name << " " << v[i].lop << " " << fixed << setprecision(1) << v[i].m1 << " " << fixed << setprecision(1) << v[i].m2 << " " << fixed << setprecision(1) << v[i].m3 << endl;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}