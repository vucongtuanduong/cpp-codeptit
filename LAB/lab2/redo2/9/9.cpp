#include <bits/stdc++.h>
using namespace std;
string encode(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            res += ((s[i] - 'A'- 2 + 26) % 26 + 'A');
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            res += ((s[i] - 'a' + 2 + 26) % 26 + 'a');
        } else {
            res += s[i];
        }
    }
    return res;
}
void testCase() {
    string s;
    getline(cin, s);
    cout << s << endl;
    cout << encode(s);
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
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