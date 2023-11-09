#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
void testCase();
void standard(string &s);
string tolower(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        res += tolower(s[i]);
    }
    return res;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    string s;
    vector<string> v;
    while (getline(cin, s)) {
        string temp = "";
        for (int i = 0;  i < s.size(); i++) {
            if (s[i] == '.' || s[i] == '?' || s[i] == '!') {
                standard(temp);
                temp += s[i];
                v.push_back(temp);
            } else {
                temp += s[i];
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}
void standard(string &s) {
    string temp = "";
    stringstream ss(s);
    string res = "";
    while (ss >> temp) {
        temp = tolower(temp);
        res += temp + " ";
    }
    res.pop_back();
    s = res;
}