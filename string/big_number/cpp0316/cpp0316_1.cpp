#include <bits/stdc++.h>
using namespace std;
int luck(string s) {
    int sum = 0;
    for (int i =0; i < s.size(); i++) {
        sum += (s[i] - '0');
    }
    if (s == "9" || sum == 9) {
        return 1;
    } else if (sum < 9) {
        return 0;
    }
     else {
        return luck(to_string(sum));
    }
}
void testCase( ){
    string s;
    cin >> s;
    // cout << s << endl;
    cout << luck(s);
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