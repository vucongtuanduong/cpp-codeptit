#include <bits/stdc++.h>
using namespace std;
int dem = 1;
void testCase();
char toupper(char c);
string standardise(string s);
class Lecturer{
    public: 
        string id = "GV";
        string name;
        string course;
        string standardCourse;
        friend istream &operator >> (istream &in, Lecturer &a) {
            string temp = to_string(dem);
            while (temp.size() != 2) {
                temp = "0" + temp;
            }
            dem++;
            a.id += temp;
            getline(in, a.name);
            string s;
            getline(in, s);
            
            a.course = s;
            a.standardCourse = standardise(s);
            return in;
        }
        friend ostream &operator << (ostream &out, Lecturer a) {
            out << a.id << " " << a.name << " " << a.standardCourse << endl;
            return out;
        }
};

//explicit
string standardise(string s) {
    string res = "";
    stringstream ss(s);
    string temp;
    while (ss >> temp) {
        char c = temp[0];
        c = toupper(c);
        res += c;
    }
    return res;
}
char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    Lecturer *dsgv = new Lecturer[n];
    for (int i = 0; i < n; i++) {
        cin >> dsgv[i];
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        string s;
        getline(cin, s);
        string standardS = standardise(s);
        cout << "DANH SACH GIANG VIEN BO MON " << standardS << ":\n";
        for (int i = 0; i < n; i++) {
            if (dsgv[i].course == s) {
                cout << dsgv[i];
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