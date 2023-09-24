#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
void bigSub(string x, string y);
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
    string x, y;
    cin >> x >> y;
    if (x.size() > y.size() || (x.size() == y.size() && x >= y)) {
        bigSub(x, y);
    } else {
        bigSub(y, x);
    }
}
void bigSub(string x, string y) {
    string a = x,b = y;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int n1 = x.size();
    int n2 = y.size();
    int diff = n1 - n2;
    for (int i = 0; i < diff; i++) {
        b += '0';
    }
    string sub = "";
    int carry = 0;
    int temp = 0;
    for (int i = 0; i < n1; i++) {
        temp = (a[i] - '0') - (b[i] - '0') - carry;
        if (temp < 0) {
            sub += (temp + 10 +  '0');
            carry = 1;
        } else {
            sub += (temp + '0');
            carry = 0;
        }
        // carry = temp / 10;
        // temp %= 10;
        
        // sum += (temp + '0');
    }
    // if (carry) {
    //     sum += (carry + '0');
    // }
    // int ok = 0;
    // for (int i = sub.size() - 1; i >= 0; i--) {
    //     if (ok == 0 && sub[i] != '0') {
    //         ok = 1;
    //     }
    //     if (ok == 1) {
    //         cout << sub[i];
    //     }
    // }
    reverse(sub.begin(), sub.end());
    cout << sub;
}