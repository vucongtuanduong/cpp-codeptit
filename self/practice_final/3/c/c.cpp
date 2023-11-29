#include <bits/stdc++.h>
using namespace std;
void testCase();

//explicit
void testCase() {
    int n;
    cin >> n;
    int a[105][105];
    int f[105][105];
    for (int i  = 1;i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        f[i][1] = a[i][1];
        f[0][i] = f[n + 1][i] = -1e9;
    }
    for (int j = 2; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            f[i][j] = max({f[i][j - 1], f[i - 1][j - 1], f[i + 1][j - 1] }) + a[i][j];
        }
    }
    int res = -1e9;
    for (int i = 1; i <= n; i++) {
        res = max(res, f[i][n]);
    }
    cout << res << endl;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}