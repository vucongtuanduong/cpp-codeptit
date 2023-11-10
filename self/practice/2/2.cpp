#include <iostream>
#include <sstream>
using namespace std;
int dem = 1;
char tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}
char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}
string changeString(string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}
string standardDepart(string s) {
    stringstream ss(s);
    string temp;
    string res = "";
    while (ss >> temp) {
        res += toupper(temp[0]);
    }
    return res;
}
class Lecturer{
    public:
        string id = "GV";
        string name;
        string department;
        friend istream &operator >> (istream &in, Lecturer &gv) {
            getline(in, gv.name);
            getline(in, gv.department);
            string temp = to_string(dem);
            while (temp.size() != 2) {
                temp = "0" + temp;
            }
            gv.id += temp;
            dem++;
            return in;
        }
};
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cin.ignore();
    Lecturer *dsgv  = new Lecturer[n];
    for (int i = 0; i < n; i++) {
        cin >> dsgv[i];
    }
    int q;
    cin >> q;
    while (q--) {
        string input;
        cin >> input;
        string change = changeString(input);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << input << ":\n";
        for (int i = 0; i < n; i++) {
            if (changeString(dsgv[i].name).find(change) != -1) {
                cout << dsgv[i].id << " " << dsgv[i].name << " " << standardDepart(dsgv[i].department) << endl;
            }
        }
    }

}