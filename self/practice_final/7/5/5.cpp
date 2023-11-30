#include <bits/stdc++.h>
using namespace std;
int dem = 1;

class Lecturer{
    public:
        string id = "GV";
        string name;
        string course = "";
        friend istream &operator >>(istream &in, Lecturer &a) {
            getline(in, a.name);
            string s  ;
            getline(in, s);
            // cout << dem;
            string temp = to_string(dem);
            while (temp.size() != 2) {
                temp = "0" + temp;
            }
            a.id += temp;
            dem++;
            
            string temp1;
            stringstream ss(s);
            while (ss >> temp1) {
                char c = temp1[0];
                c = toupper(c);
                a.course += c;
            }
            return in;
        }
        friend ostream &operator <<(ostream &out, Lecturer a) {
            out << a.id << " " << a.name << " " << a.course << endl;
            return out;
        }
};      
void testCase();
char toupper(char &c);
string standardise(string s);
//explicit
string standardise(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}
char toupper(char &c) {
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
    // cin.ignore();
    while (q--) {
        string s;
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        string s2 = standardise(s);
        for (int i = 0; i < n; i++) {
            string s1 = standardise(dsgv[i].name);
            if (s1.find(s2) != -1) {
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
    // int t;
    // cin >> t;
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}