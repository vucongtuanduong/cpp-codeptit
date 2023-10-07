#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void testCase();
string catalan(int n);
string operator * (string a, int b);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif
    testCase();

}
void testCase() {
    int n;
    cin >> n;
    cout << catalan(n + 1);
}
string catalan(int n) {
    vector<int> v;
    for (int i = n + 2; i <= 2 * n; i++) {
        v.push_back(i);
    }
    for (int i = 2; i <= n; i++) {
        int temp = i;
        for (int j = 0;j < v.size() && temp > 1; j++) {
            int gcd = __gcd(temp, v[j]);
            temp /= gcd;
            v[j] /= gcd;
        }
    }
    string res = "1";
    for (int i = 0; i < v.size(); i++) {
        res = res * v[i];
    }
    return res;
}
string operator * (string a, int b) {
    if (a == "0" || b == 0) {
        return "0";
    } 
    int n  = a.size();
    string res(n, '0');
    int carry = 0;
    for (int i = n - 1; i >= 0; i--) {
        carry += (a[i] - '0') * b;
        res[i] = carry % 10 + '0';
        carry /= 10;
    }
    if (carry) {
        res = to_string(carry) + res;
    }
    return res;
}