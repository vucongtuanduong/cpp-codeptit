#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
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
void standardise(string s, vector<string> &v) {
    stringstream ss(s);
    string temp;
    while (ss >> temp) {
        for (int i = 0; i <= temp.size(); i++) {
            tolower(temp[i]);
        }
        v.push_back(temp);
    }
}
void testCase() {
    string s;
    getline(cin, s);
    vector<string> v;
    standardise(s, v);
    int n = v.size() - 1;
    string res = "";
    res += v[n];
    for (int i = 0; i < n; i++) {
        res += v[i][0];
    }
    mp[res]++;
    if (mp[res] > 1) {
        cout << res << mp[res] << "@ptit.edu.vn";
    } else {
        cout << res << "@ptit.edu.vn";
    }
    
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}