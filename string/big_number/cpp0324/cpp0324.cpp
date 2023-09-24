#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
long long powll(long long a, long long b,  long long m);
long long mod(string a, long long m);
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
    string a;
    long long b, m;
    cin >> a >> b >> m;
    long long x = mod(a, m);
    cout << powll(x, b, m);
}
long long powll(long long a, long long b,  long long m) {
    long long x;
    if (b == 0) {
        return 1;
    } else if (b == 1) {
        return a;
    } else {
        x = powll(a, b / 2, m);
        if (b % 2 == 0) {
            x = x * x % m;
        } else {
            x = x * x % m;
            x = x * a % m;
        }
    }
    return x;
}
long long mod(string a, long long m) {
    long long res = 0;
    for (auto x : a) {
        res = (res * 10 + (x - '0'));
        res %= m;
    }
    return res;
}