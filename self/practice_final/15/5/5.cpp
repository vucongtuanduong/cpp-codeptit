#include <bits/stdc++.h>
using namespace std;
int dem = 1;
class SinhVien;
void toupper(char &c);
void tolower(char &c);
string standardise(string s);
class SinhVien{
    public:
        string id = "SV";
        string name;
        string dob;
        string className;
        double gpa;
        friend istream &operator >> (istream &in, SinhVien &a) {
            string temp = to_string(dem);
            while (temp.size() != 3) {
                temp = "0" + temp;

            }
            dem++;
            a.id += temp;
            string ten;
            getline(in, ten);
            a.name  = standardise(ten);
            // cout << a.name << endl;
            getline(in, a.className);
            // cout << a.className << endl;
            string date;
            getline(in, date);
            // cout << date << endl;
            if (date[2] != '/') {
                date.insert(0, "0");
            }
            if (date[5] != '/') {
                date.insert(3, "0");
            }
            a.dob = date;
            in >> a.gpa;
            // cout << a.gpa << endl;
            in.ignore();
            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien a) {
            out << a.id << " " << a.name << " " << a.className << " " << a.dob << " " << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }

};
void toupper(char &c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
}
void tolower(char &c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
}
string standardise(string s) {
    string res = "";
    string temp;
    stringstream ss(s);
    while (ss >> temp) {
        toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++) {
            tolower(temp[i]);
        }
        res += temp + " ";
    }
    res.pop_back();
    return res;
}
bool cmp(SinhVien a, SinhVien b) {
    if (a.gpa == b.gpa) {
        return a.id < b.id;
    }
    return a.gpa > b.gpa;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    SinhVien *dssv = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        cin >> dssv[i];
    }
    sort(dssv, dssv + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << dssv[i];
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}