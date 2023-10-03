#include <iostream>
#include <algorithm>
using namespace std;
class Company{
    private:
        string id;
        string name;
        int capacity;
    public:
        Company() {
            id = "";
            name = "";
            capacity = 0;
        }
        int getCapacity() {
            return capacity;
        }
        string getId() {
            return id;
        }
        friend istream & operator >> (istream &in, Company &c);
        friend ostream &operator << (ostream &out, Company &c);

};
istream & operator >> (istream &in, Company &c) {
            in >> c.id;
            cin.ignore();
            getline(in, c.name);
            in >> c.capacity;
            return in;
}
ostream &operator << (ostream &out, Company &c) {
            out << c.id << " " << c.name << " " << c.capacity << endl;
            return out;
}
bool cmp(Company a, Company b) {
    if (a.getCapacity() == b.getCapacity()) {
        return a.getId() < b.getId();
    }
    return a.getCapacity() > b.getCapacity();
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    Company *c = new Company[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c, c + n, cmp);
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        for (int i = 0; i < n; i++) {
            if (c[i].getCapacity() >= l && c[i].getCapacity() <= r) {
                cout << c[i];
            }
        } 
    }
}