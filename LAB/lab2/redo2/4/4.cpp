#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s = "";
    getline(cin, s);
    s += " ";
    string temp = "Can cu Ke hoach giang day – hoc tap hoc ky 1 nam hoc 2021 – 2022 Can cu ket qua thi hoc ky 2 va";
    int i = 0;
    string res = "";
    while (i < s.size() && i < 100) {
        res += s[i];
        i++;
    }
    // cout << res ;
    if (s[98] != ' ' && s[99] != ' ') {
        int t = res.size() - 1;
        while (res[t] != ' ') {
            res.pop_back();
            t = res.size() - 1;
        }
        res.pop_back();
    }
    cout << res ;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
    // testCase();
}