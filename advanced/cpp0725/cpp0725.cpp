#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
long long C[1005][1005];
void testCase();
void init();
int main ( ){
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
}
void testCase() {
    int n, k;
    cin >> n >> k;
    cout << C[n][k];

}
void init() {
    for (int i = 0; i < 1005; i++) {
        for (int j = 0; j < 1005; j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
            }
        }
    }
}