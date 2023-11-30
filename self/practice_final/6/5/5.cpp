#include <bits/stdc++.h>
using namespace std;
class Company{
    public:
        string id;
        string name;
        int numStudents;
        friend istream &operator >>(istream &in, Company &a) {
            getline(in, a.id);
            getline(in, a.name);
            in >> a.numStudents;
            in.ignore();
            return in;
        }
        friend ostream &operator << (ostream &out, Company a) {
            out << a.id << " " << a.name << " " << a.numStudents << endl;
            return out;
        }
};
void testCase();
bool cmp(Company a, Company b);
//explicit
bool cmp(Company a, Company b) {
    if (a.numStudents == b.numStudents) {
        return a.id < b.id;
    }
    return a.numStudents > b.numStudents;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    Company *a = new Company[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    while (q--) {
        int b, c;
        cin >> b >> c;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << b << " DEN " << c << " SINH VIEN:\n";
        for (int i = 0; i < n; i++) {
            if (a[i].numStudents >= b && a[i].numStudents <= c) {
                cout << a[i];
            }
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}