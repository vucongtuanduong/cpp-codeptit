#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;
int dem = 1;
void standardWord(string &s) {
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 32;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        } 
    }

}
string standardName(string s) {
    string res = "";
    string temp ;
    stringstream ss(s);
    while (ss >> temp) {
        standardWord(temp);
        res += temp + " ";
    }
    res.pop_back();
    return res;
}
class SinhVien{
    public:
        string id;
        string name;
        string className;
        string email;
        friend istream &operator >> (istream &in, SinhVien &sv) {
            // if (dem == 1) {
            //     scanf("\n");

            // }
            // dem++;
            getline(in, sv.id);
            getline(in, sv.name);
            getline(in, sv.className);
            getline(in, sv.email);
            sv.name = standardName(sv.name);
            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien a) {
            out << a.id << " " << a.name << " " << a.className << " " << a.email;
            return out; 
        }
};
bool cmp(SinhVien a, SinhVien b) {
    return a.id < b.id;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream file;
    file.open("SINHVIEN.in");
    int n;
    file >> n;
    file.ignore();
    SinhVien *a = new SinhVien[1000];
    for (int i = 0; i < n; i++) {
        file >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    file.close();
}