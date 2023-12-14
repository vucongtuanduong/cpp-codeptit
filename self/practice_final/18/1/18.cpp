#include <bits/stdc++.h>
using namespace std;
long long powll(long long x, long long y, long long k) {
    if (y == 0) {
        return 1;
    }
    if (y == 1) {
        return x;
    }
    long long res = powll(x, y / 2, k);
    if (y % 2 == 0) {
        res = (res * res) % k;
        res %= k;
    } else {
        res = x * ((res * res) % k);
        res %= k;
    }
    return res;
}
void testCase() {
    long long n,m, k;
    cin >> n >> m >> k;
    long long x = pow(10, k);
    cout << powll(n, m , x);
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}