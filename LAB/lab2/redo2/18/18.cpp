#include <bits/stdc++.h>
using namespace std;
bool haveSpace(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            return true;
        }
    }
    return false;
}
bool haveDot(string s) {
    string temp;
    vector<string> v;
    stringstream ss(s);
    while (getline(ss, temp, '.')) {
        v.push_back(temp);
    }
    if (v.size() >= 2) {
        return true;
    } else {
        return false;
    }
}
bool isValid(string s) {
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '.' || s[i] == ',' || s[i] == '_' || s[i] == '@') {
            // cout << s[i];
            continue;
        } else {
            return false;
        }
    }
    // cout << endl;
    return true;
}
void testCase() {
    string s;
    getline(cin, s);
    if (haveSpace(s)) {
        cout << "NO";
        return;
    }
    vector<string> v;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, '@')) {
        v.push_back(temp);
    }
    if (v.size() != 2) {
        cout << "NO";
        return;
    }
    
    if (v[0].size() > 64) {
        cout << "NO";
        return;
    }
    if (v[1].size() > 254) {
        cout << "NO";
        return;
    }
    
    if (!haveDot(v[1])) {
        cout << "NO";
        return;
    }
    
    if (isValid(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    // cout << "\nv[0]: " <<v[0] << endl;
    // cout << "\nv[1]: " << v[1] << endl; 
    // cout << "YES";
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
    // testCase();
}