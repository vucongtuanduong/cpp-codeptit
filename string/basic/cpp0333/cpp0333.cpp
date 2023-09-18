#include <bits/stdc++.h>
using namespace std;
void testCase();
string tolower(string s);
string toupper(string s);
void testCase2();//bai cua TQB
int main () {
    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--) {
    //     testCase();
    //     cout << endl;
        
    // }


    testCase();
}
void testCase() {
    string s,tmp;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    while (ss >> tmp) {
        tmp = tolower(tmp);
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size() - 2; i++) {
        cout << v[i] << " ";
    }
    cout << v[v.size() - 2] << ", " << toupper(v.back());

}
string tolower(string s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}
string toupper(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    return s;
}
void testCase2() {

}