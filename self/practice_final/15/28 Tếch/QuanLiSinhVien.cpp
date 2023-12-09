
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)
#define MOD (long long) (1000000007)
using namespace std;

int cnt = 0;

struct SinhVien {
    int id;
    string name;
    string bd;
    string lop;
    double gpa;
};


string chuanhoa(string s) {
    stringstream ss(s);
    string t;

    string name = "";

    while (ss >> t) {
        for (int i = 0; i < t.length(); i++) {
            t[i] = tolower(t[i]);
        }
        t[0] = toupper(t[0]);
        name = name + t + " ";
    }
    name.pop_back();
    return name;

}

bool cmp(SinhVien& a, SinhVien& b) {
    if (a.gpa > b.gpa) return 1;
    if (a.gpa < b.gpa) return 0;
    if (a.id < b.id) return 1;
    if (a.id > b.id) return 0;
    return 0;
}
int main() {
    int n;
    cin >> n;
    struct SinhVien ds[100];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cnt++;
        ds[i].id = cnt;
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].bd >> ds[i].gpa;

        ds[i].name = chuanhoa(ds[i].name);

        if (ds[i].bd[1] == '/') ds[i].bd.insert(0, "0");
        if (ds[i].bd[4] == '/') ds[i].bd.insert(3, "0");
    }

    sort(ds, ds + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << "SV" << zero(3) << ds[i].id << " " << ds[i].name << " "
            << ds[i].lop << " " << ds[i].bd << " " << stp(2) << ds[i].gpa << endl;
    }

    return 0;
}