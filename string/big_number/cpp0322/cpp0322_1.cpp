#include <iostream>
using namespace std;    
void testCase();
string bigSum(string x, string y);
int main ( ){
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
}
void testCase() {
    string x,y;
    cin >> x >> y;
    string res = bigSum(x,y);
    cout << res;
}
string bigSum(string x, string y) {
    if (x.size() < y.size()) {
        x.insert(0, y.size() - x.size(), '0');
    }
    if (y.size() < x.size()) {
        y.insert(0, x.size() - y.size(), '0');
    }
    string res = x;
    int carry = 0;
    for (int i = x.size() - 1; i >= 0; i--) {
        int temp = (x[i] - '0' + y[i] - '0' + carry);
        carry = temp / 10;
        temp %= 10;
        res[i] = char(temp + '0');
    }
    if (carry) {
        res = "1" + res;
    }
    return res;
}