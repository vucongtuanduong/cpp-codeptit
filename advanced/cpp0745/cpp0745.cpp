#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
void testCase() ;
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
void testCase () {
    int n;
    cin >> n;
    long long fibo[n  + 2];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n + 2; i++) {
        fibo[i] = (fibo[i - 1] % MOD) + (fibo[i - 2] % MOD);
        fibo[i] %= MOD;
    }
    cout << fibo[n];
}