#include <bits/stdc++.h>
using namespace std;
const int MAX = 1005;
long long fibo[MAX];
const int MOD = 1e9 + 7;
void init() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fibo[i] = (fibo[i - 1] % MOD) + (fibo[i - 2] % MOD);
        fibo[i] %= MOD;
    }
}
void testCase() {
    int n;
    cin >> n;
    cout << fibo[n];
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}