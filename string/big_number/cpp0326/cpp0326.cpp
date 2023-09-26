#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void testCase();
string bigSum(string a, string b);
string bigMul(char a, string b);
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
    // int n;
    // cin >> n;
    // cin.ignore();
    string a,b;
    cin >> a >> b;
    // cout << a << " " << b << endl;
    int len = a.size();
    string res = "";
    for (int i = len - 1; i >= 0; --i) {
        string m = bigMul(a[i], b);
        m.insert(m.size(), len - i - 1, '0');
        // cout << m << endl;
        res = bigSum(res, m);
        // cout << "enter!";
    }
    cout << res;
}
string bigSum(string a, string b) {
    string x = a, y = b;
    if (x.size() < y.size()) {
        x.insert(0, y.size() - x.size(), '0');
    } else {
        y.insert(0, x.size() - y.size(), '0');
    }
    
    string res = "";
    int temp = 0;
    // cout << temp << endl;
    for (int i = x.size() - 1; i >= 0; i--) {
        temp = (x[i] - '0') + (y[i] - '0') + temp;
        res.insert(0, 1, (temp % 10 + '0'));
        temp /= 10;
        // cout << res << endl;
    }
    if (temp > 0) {
        res.insert(0, 1, (temp + '0'));
    }
    return res;
}
string bigMul(char a, string b) {
    string res = "";
    int temp = 0;
    for (int i = b.size() - 1; i >= 0; --i) {
        temp = (a - '0') * (b[i] - '0') + temp;
        // cout << temp << endl;
        res.insert(0, 1, temp % 10 + '0');
        temp /= 10;
        
        // cout << res << endl;
    }
    if (temp > 0) {
        res.insert(0, 1, temp % 10 + '0');
    }
    return res;
}