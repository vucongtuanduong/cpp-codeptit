#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    map<char,int> mp;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            mp[s[i]]++;
        } else {
            sum += s[i] - '0';
        }
        
    }
    for (auto x : mp) {
        while (x.second --) {
            cout << x.first;
            
        }
    }
    cout << sum;
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