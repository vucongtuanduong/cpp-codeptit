#include <bits/stdc++.h>
using namespace std;
void testCase();
//explicit
void testCase() {
    int n, m;
    cin >> n >> m;
    int a[105][105];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int rb = 0, re = n - 1, cb = 0, ce = m - 1;
    while (rb < re && cb < ce) {
        for (int j = cb; j < ce; j++) {
            cout << a[rb][j] << " ";
        }
        for (int i = rb; i < re; i++) {
            cout << a[i][ce] << " ";
        }
        for (int j = ce; j > cb; j--) {
            cout << a[re][j] << " ";
        }
        for (int i = re; i > rb; i--) {
            cout << a[i][cb] << " ";
        }
        rb++;
        re--;
        cb++;
        ce--;
    }
    if (rb == re && cb == ce) {
        cout << a[rb][cb] << " ";
    } else if (rb == re && cb < ce) {
        for (int j = cb; j <= ce; j++) {
            cout << a[rb][j] << " ";
        } 
    } else if (rb < re && cb == ce) {
        for (int i = rb; i <= re; i++) {
            cout << a[i][cb] << " ";
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    // sieve();
    while (t--) {
        testCase();
        cout << endl;
    }
}