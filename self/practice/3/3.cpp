#include <iostream>
#include <algorithm>
using namespace std;
class Company{
    public:
        string id;
        string name;
        int quantity;
        friend istream &operator >> (istream &in, Company &ct) {
            getline(in, ct.id);
            getline(in, ct.name);
            in >> ct.quantity;
            in.ignore();
            return in;
        }

};
bool cmp(Company a, Company b) {
    if (a.quantity == b.quantity) {
        return a.id < b.id;
    }
    return a.quantity > b.quantity;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    Company *ds = new Company[n];
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }
    sort(ds, ds + n, cmp);
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN: \n";
        for (int i = 0; i < n; i++) {
            if (ds[i].quantity >= a && ds[i].quantity <= b) {
                cout << ds[i].id << " " << ds[i].name << " " << ds[i].quantity << endl; 
            }
        }
    }
}