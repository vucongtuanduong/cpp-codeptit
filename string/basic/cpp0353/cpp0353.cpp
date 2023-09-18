#include <iostream>
#include <cmath>
#include <map>
using namespace std;
void testCase();
void tolower(string &s);
int isPalindrome(string s);
int main () {
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
    map<char,int> m;
    m['a'] = m['b'] = m['c'] = 2;
    m['d'] = m['e'] = m['f'] = 3;
    m['g'] = m['h'] = m['i'] = 4;
    m['j'] = m['k'] = m['l'] = 5;
    m['m'] = m['n'] = m['o'] = 6;
    m['p'] = m['q'] = m['r'] = m['s'] = 7;
    m['t'] = m['u'] = m['v'] = 8;
    m['w'] = m['x'] = m['y'] = m['z'] =  9;
    string res = "";
    tolower(s);
    // cout << s << endl;
    for (int i = 0; i < s.size(); i++) {
        res += to_string(m[s[i]]);
    }
    if (isPalindrome(res)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
void tolower(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
}
int isPalindrome(string s) {
    int n = s.size();
    for (int i = 0; i <= n  / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}