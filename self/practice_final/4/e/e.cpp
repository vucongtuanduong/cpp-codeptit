#include <bits/stdc++.h>
using namespace std;
class NhanVien{
    public:
        string id;
        string role;
        string name;
        string dob;
        int numDays;
        int basicSal;
        int stipend;
        int reward;
        int totalSal;
};
void testCase();
bool cmp(NhanVien a, NhanVien b);
//explicit
bool cmp(NhanVien a, NhanVien b) {
    if (a.totalSal == b.totalSal) {
        return a.id < b.id;
    }
    return a.totalSal > b.totalSal;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    vector<NhanVien> v;
    for (int i = 0; i < n; i++) {
        NhanVien x;
        string s;
        getline(cin, s);
        x.id = s;
        getline(cin, x.name);
        string date ;
        getline(cin, date);
        cin >> x.numDays >> x.basicSal;
        cin.ignore();
        if (date[2] != '/') {
            date.insert(0, "0");
        }
        if (date[5] != '/') {
            date.insert(3, "0");
        }
        x.dob = date;
        string temp = "";
        int j = 0;
        while (s[j] != '-') {
            temp += s[j];
            j++;
        }
        // cout << "temp: " << temp << endl;
        if (temp == "GD") {
            x.role = "Giam doc";
            x.stipend = 2000000;
        } else if (temp == "PGD") {
            x.role = "Pho giam doc";
            x.stipend = 1000000;
        } else if (temp == "TP") {
            x.role = "Truong phong";
            x.stipend = 500000;
        } else if (temp == "NV") {
            x.role = "Nhan vien";
            x.stipend = 200000;
        }
        // cout << x.role << endl;
        if (x.numDays >= 27) {
            x.reward = 0.2 * x.basicSal * x.numDays;
        } else if (x.numDays >= 25) {
            x.reward = 0.1 * x.basicSal * x.numDays;
        } else {
            x.reward = 0;
        }
        x.totalSal = x.basicSal * x.numDays + x.reward + x.stipend;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].id << " " << v[i].name << " " << v[i].role << " " << v[i].dob << " " << v[i].numDays << " " << v[i].basicSal << " " << v[i].totalSal << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}