#include <bits/stdc++.h>
using namespace std;
     
void testCase();

//explicit

void testCase() {
    
    string s;
    cin >> s;
    map<char,int> mp;
    int n = s.size();
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    int max = -1;
    for (auto x : mp) {
        if (x.second > max) {
            max = x.second;

        }
    }
    if (n % 2 == 0) {
        if (max > (n / 2)) {
            cout << "0";
        } else {
            cout << "1";
        }
    } else {
        int m = (int)(n / 2) + 1;
        if (max > m) {
            cout << "0";
        } else {
            cout << "1";
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    
}
