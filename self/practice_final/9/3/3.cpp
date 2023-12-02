#include <bits/stdc++.h>
using namespace std;
void testCase();
string bigSum(string s1, string s2);
//explicit
string bigSum(string s1, string s2) {
    while(s2.size() != s1.size()) {
        s2 = "0" + s2;
    }
    string res = s2;
    int carry = 0;
    for (int i = s2.size() - 1; i >= 0; i--) {
        int temp = (s1[i] - '0') + (s2[i] - '0') + carry;
        carry = temp / 10;
        temp %= 10;
        res[i] = temp + '0';
    }
    if (carry > 0) {
        res.insert(0, "1");
    }
    return res;
}
void testCase() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() >= s2.size() || s1.size() == s2.size() && s1 > s2) {
        cout << bigSum(s1, s2);
    } else {
        cout << bigSum(s2, s1);
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