#include <iostream>
using namespace std;
void testCase();
string bigSub(string x, string y);
int main ( ){
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
    if (x.size() > y.size() || (x.size() == y.size() && x > y)) {
        cout << bigSub(x, y);
    } else {
        cout << bigSub(y, x);
    }
}
string bigSub(string x, string y) {
    // x > y
    while (y.size() < x.size()) {
        y.insert(0, "0");
    }
    string res = x;
    int carry = 0;
    for (int i = x.size() - 1; i >= 0; i--) {
        int temp = (x[i] - '0') - (y[i] - '0') - carry;
        if (temp < 0) {
            temp += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        res[i] = temp + '0';

    }
    // while (res[0] == '0' && res.size() > 1) {
    //     res.erase(0, 1);
    // }
    return res;
}