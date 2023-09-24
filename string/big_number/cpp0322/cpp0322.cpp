#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
void bigSum(string x, string y);
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
    if (x.size() >= y.size()) {
        bigSum(x, y);
    } else {
        bigSum(y, x);
    }
}
void bigSum(string x, string y) {
    string a = x,b = y;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int n1 = x.size();
    int n2 = y.size();
    int diff = n1 - n2;
    for (int i = 0; i < diff; i++) {
        b += '0';
    }
    string sum = "";
    int carry = 0;
    int temp = 0;
    for (int i = 0; i < n1; i++) {
        temp = (a[i] - '0') + (b[i] - '0') + carry;
        carry = temp / 10;
        temp %= 10;
        
        sum += (temp + '0');
    }
    if (carry) {
        sum += (carry + '0');
    }
    reverse(sum.begin(), sum.end());
    cout << sum;
}