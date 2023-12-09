#include <bits/stdc++.h>

using namespace std;

void testCase() {
    string s;
    string res;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            res += s[i];
        }
    }
    // cout << "1 test: ";
    // cout << res << endl;
    if (res[0] == '8' && res[1] == '4') {
        res.erase(0, 2);
        res.insert(0, "0");
    }
    cout << res;
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
    testCase();
    return 0;
}