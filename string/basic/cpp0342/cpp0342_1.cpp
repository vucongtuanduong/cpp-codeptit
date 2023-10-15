#include <iostream>
#include <map>
using namespace std;
void testCase();
int main ( ){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t-- ) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    cin >> s;
    long long res = 0;
    map<char,int> m;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            res += (s[i] - '0');
        } else {
            m[s[i]] ++;
        }
    }
    for (auto x: m) {
        while(x.second--) {
            cout << x.first;
        }
    }
    cout << res;
}