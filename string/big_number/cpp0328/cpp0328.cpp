#include <iostream>
using namespace std;
void testCase();
int solve(string s, int k);
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
void testCase() {
    string s;
    cin >> s;
    cout << solve(s, 8) - solve(s, 24);
}
int solve(string s, int k) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        int res = 0;
        for (int j = i; j < s.size(); j++) {
            res = res * 10 + (s[j] - '0');
            res %= k;
            if (res == 0) {
                count++;
                // cout << s.substr(i, j - i + 1) << " ";
            } 
       }
    }
    return count;
}