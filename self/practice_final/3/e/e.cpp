#include <bits/stdc++.h>
using namespace std;
class SinhVien;
int dem = 1; 

void testCase();
string standardName(string s);
string standardDate(string s);
void tolower(char &c);
void toupper(char &c);
bool cmp(SinhVien a, SinhVien b);
class SinhVien{
    public:
        string id = "SV";
        string name;
        string dob;
        string className;
        double gpa;
        friend istream &operator >> (istream &in, SinhVien &sv) {
            string s;
            string temp = to_string(dem);
            while (temp.size() != 3) {
                temp = "0" + temp;
            } 
            dem++;
            sv.id += temp;
            getline(in, s);
            getline(in, sv.className);
            string date;
            getline(in, date);
            in >> sv.gpa;
            in.ignore();
            s = standardName(s);
            date = standardDate(date);
            sv.name = s;
            sv.dob = date;
            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien sv) {
            out << sv.id << " " << sv.name << " " << sv.className << " " << sv.dob << " " << fixed << setprecision(2) << sv.gpa << endl;
            return out;
        }
};

//explicit
bool cmp(SinhVien a, SinhVien b) {
    if (a.gpa == b.gpa) {
        return a.id < b.id;
    }
    return a.gpa > b.gpa;
}
string standardDate(string s) {
    if (s[2] != '/') {
        s.insert(0, "0");
    }
    if (s[5] != '/') {
        s.insert(3, "0");
    }
    return s;
}
void tolower(char &c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
}

void toupper(char &c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
}
string standardName(string s) {
    string temp;
    stringstream ss(s);
    string res = "";
    while (ss >> temp) {
        // cout << temp << endl;
        toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++) {
            tolower(temp[i]);
        }
        // cout << temp << endl;
        res = res + temp + " ";
    }
    res.pop_back();
    return res;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> v;
    for (int i = 0; i < n; i++) {
        SinhVien x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] ;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}