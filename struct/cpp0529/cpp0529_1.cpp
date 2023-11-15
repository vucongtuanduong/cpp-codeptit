#include <iostream>
#include <algorithm>
using namespace std;

int dem = 1;

class SinhVien{
    public:
        string id;
        string stt;
        string name;
        string className;
        string email;
        string company;
        friend istream &operator >> (istream &in, SinhVien &sv) {
            
            string temp = to_string(dem);
            dem++;
            sv.stt = temp;
            getline(in, sv.id);
            getline(in, sv.name);
            getline(in, sv.className);
            getline(in, sv.email);
            getline(in, sv.company);
            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien sv) {
            out << sv.stt << " " << sv.id << " " << sv.name << " " << sv.className << " " << sv.email << " " << sv.company;
            return out;
        }

};
bool cmp(SinhVien a, SinhVien b) {
    return a.id < b.id;
}
void sapxep(SinhVien *dssv, int n) {
    sort(dssv, dssv + n, cmp);
}
int main ( ){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    SinhVien *dssv = new SinhVien[n];

    for (int i = 0; i < n; i++) {
        cin >> dssv[i];
    }
    sapxep(dssv, n);
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        string s;
        getline(cin, s);
        for (int i = 0; i < n; i++) {
            if (dssv[i].company == s) {
                cout << dssv[i] << endl;
            }
        }
    }
}