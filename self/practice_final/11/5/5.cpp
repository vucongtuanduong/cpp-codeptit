#include <bits/stdc++.h>
using namespace std;
void testCase();
//cu the
void testCase() {
    string s;
    cin >> s;
    int n = s.size(); 
    int i  = s.size() - 1;
    int j = s.size() - 2;
    while (s[j] <= s[j + 1]) {
        j--;
    }
    if (j < 0) {
        cout << "-1";
        return;
    }
    while (s[i] >= s[j]) {
        i--;
    }
    while (s[i] == s[i - 1]) {
        i--;
    }
    swap(s[i], s[j]);
    cout << s;
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