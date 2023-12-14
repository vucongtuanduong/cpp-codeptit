#include <bits/stdc++.h>
//06:58
using namespace std;
string passcode(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'J') {
            res += to_string(s[i] - 'A');
        } else if (s[i] >= 'K' && s[i] <= 'T') {
            res += to_string(s[i] - 'K');
        }
    }
    return res;
}
void testCase() {
    string s1, s2;
    cin >> s1 >> s2;
    string res = passcode(s2);
    cout << "'res: '" << res << endl;
    if (res == s1) {
        cout << "YES";

    } else {
        cout << "NO";
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}