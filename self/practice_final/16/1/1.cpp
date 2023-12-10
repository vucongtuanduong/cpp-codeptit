#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 1;
long long *a = new long long[MAX];
const int MOD = 1e9 + 7;
void init() {
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i < MAX; i++) {
        a[i] = ((2 * a[i - 1]) % MOD) + ((3 * a[i - 2]) % MOD);
        a[i] %= MOD;
    }
}
void testCase() {
    int n;
    cin >> n;
    cout << a[n];
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    init();
    testCase();
}