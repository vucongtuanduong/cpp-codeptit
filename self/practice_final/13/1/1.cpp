#include <bits/stdc++.h>
using namespace std;
class SinhVien;
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
    stringstream ss(s);
    string temp;
    while (ss >> temp) {
        toupper(temp[0]);
        for (int i = 1; i <= temp.size(); i++) {
            tolower(temp[i]);
        }
        res += temp + " ";
    }
    res.pop_back();
    return res;
}
class SinhVien{
    public:
        string id = "B20DCCN001";
        string name;
        string className;
        string dob;
        double gpa;
        friend istream &operator >>(istream &in, SinhVien &a) {
            string s;
            getline(in, s);
            a.name = standardise(s);
            getline(in, a.className);
            string date ;
            getline(in, date);
            if (date[2] != '/') {
                date.insert(0, "0");
            }
            if (date[5] != '/') {
                date.insert(3, "0");
            }
            a.dob = date;
            in >> a.gpa;
            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien a) {
            out << a.id << " " << a.name << " " << a.className << " " << a.dob << " " << fixed << setprecision(2) << a.gpa ;
            return out;
        }
};
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}