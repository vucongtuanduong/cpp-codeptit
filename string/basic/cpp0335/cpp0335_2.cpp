#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    int i = 0;
    long long res = 0;
    string temp = "";
    while (i < s.size()) {
        if (isdigit(s[i])) {
            temp += s[i];
            if (i == s.size() - 1) {
                if (temp != "") {
                    long long x = stoi(temp);
                    res = max(res, x);
                }
            }
        } else {
            // cout << "temp: " << temp << endl;
            if (temp != "") {
                long long x = stoi(temp);
                res = max(res, x);
            }
            
            temp = "";
        }
        i++;
    }
    cout << res ;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}