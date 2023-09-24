#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct SinhVien{
    int stt;
    string id, name , lop, email, company;
};
vector<SinhVien> v;
//prototype
void nhap(SinhVien a[], int n);
bool sx(SinhVien a, SinhVien b);
void sapxep(SinhVien a[], int n);
void query(SinhVien a[], int n);
void in(SinhVien a);
//---------------------------
//explicit
void nhap(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i].stt = i + 1;
        getline(cin, a[i].id);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].company);
    }
}
bool sx(SinhVien a, SinhVien b) {
    return a.id < b.id;
}
void sapxep(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end(), sx);
}
void query(SinhVien a[], int n) {
    string s;
    cin >> s;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].company == s) {
            in(v[i]);
        }
    }
}
void in(SinhVien a) {
    cout << a.stt << " " << a.id << " " << a.name << " " << a.lop << " " << a.email << " " << a.company << endl;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    nhap(a, n);
    sapxep(a, n);
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        query(a, n);
    }
}