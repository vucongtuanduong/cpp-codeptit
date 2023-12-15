#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    map<char,int> mp;
    int n = s.size();
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    int max = 0;
    for (auto x : mp) {
        if (x.second > max) {
            max = x.second;
        }
    }
    if (n % 2 == 0) {
        int x = n / 2;
        if (max > x) {
            cout << "0";
        } else {
            cout << "1";
        }
    } else {
        int x = (int) n / 2 + 1;
        if (max > x) {
            cout << "0";
        } else {
            cout << "1";
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}