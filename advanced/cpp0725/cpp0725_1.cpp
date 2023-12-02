#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int c[1005][1005];
void init(){ 
    for (int i = 0; i < 1005; i++) {
        for (int j = 0; j < 1005; j++) {
            if (i == j || j == 0) {
                c[i][j] = 1;
            } else {
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
            }
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
    init();
    while (t--) {
        int n, r;
        cin >> n >> r;
        cout << c[n][r] << endl;
    }
}