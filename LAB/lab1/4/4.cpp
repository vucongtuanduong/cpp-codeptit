#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
void testCase();
long long minChange(long long x);
long long maxChange(long long x);
string bigSum(string s1, string s2);
string maxChange(string s);
string minChange(string s);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    // cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }

    // testCase();
    
}
void testCase() {
    string x1,x2;
    cin >> x1 >> x2;
    // cout << x1 << " " << x2 << endl;
    // cout << minChange(x1) << " " << minChange(x2) << endl;
    // cout << maxChange(x1) << " " << maxChange(x2) << endl;
    // string min = bigSum(minChange(x1),minChange(x2));
    // string max =bigSum( maxChange(x1) , maxChange(x2));
    long long min = stoll(minChange(x1) ) + stoll(minChange(x2));
    long long max = stoll(maxChange(x1)) + stoll(maxChange(x2));
    cout << min << " " << max;
}
long long minChange(long long x) {
    long long res = 0;
    while (x > 0) {
        int digit = x % 10;
        if (digit == 6) {
            res = res * 10 + 5;
        } else {
            res = res * 10 + digit;
        }
        x /= 10;
    }
    long long n = res;
    res = 0;
    while (n > 0) {
        res = res * 10 + (n % 10);
        n /= 10;
    }
    return res;
}

long long maxChange(long long x) {
    long long res = 0;
    while (x >  0) {
        int digit = x % 10;
        if (digit == 5) {
            res = res * 10 + 6;
        } else {
            res = res * 10 + digit;
        }
        x /= 10;
    }
    long long n = res;
    res = 0;
    while (n > 0) {
        res = res * 10 + (n % 10);
        n /= 10;
    }
    return res;
}
string bigSum(string s1, string s2) {
    if (s1.size() < s2.size()) {
        s1.insert(0, "0", s2.size() - s1.size());
    }
    if (s2.size() < s1.size()) {
        s2.insert(0, "0", s1.size() - s2.size());
    }
    // cout << s1 << " " << s2 << endl;
    string res = s1;
    int carry = 0;
    for (int i = s1.size() - 1; i >= 0; i--) {
        int temp = s1[i] - '0' + s2[i] - '0' + carry;
        // cout << "s1[i]: " << s1[i] << ", s2[i] : " << s2[i] << endl;
        // cout << "temp: " << temp << endl;
        carry = temp / 10;
        temp %= 10;
        res[i] = (temp + '0');
    }
    if (carry) {
        res = "1" + res;
    }
    return res;
}
string maxChange(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '5') {
            s[i] = '6';
        }
    }
    return s;
}
string minChange(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '6') {
            s[i] = '5';
        }
    }
    return s;
}
