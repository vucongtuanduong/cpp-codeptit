#include <iostream>
#include <algorithm>
using namespace std;
const int MOD = 1e9 + 7;
void testCase();
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
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long h = a[0], g = a[0];
    for (int i = 1; i < n; i++) {
        h = h * a[i] % MOD;
        g = __gcd(g, a[i]);
    }
    long long res = 1;
    for (int i = 1; i <= g; i++) {
        res = res * h % MOD;
    }
    cout << res;
}