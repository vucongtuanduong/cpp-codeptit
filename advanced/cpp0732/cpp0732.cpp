#include <iostream>
using namespace std;
void testCase();
int main ( ){
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
    int a[n + 5];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long dp[1005];
    long long res  = 0, temp ;
    for (int i= 1; i <= n; i++) {
        dp[i] = a[i];
        for (int j = 1; j <= i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + a[i]);
            }
            
        }
        res = max(res, dp[i]);
    }
    cout << res;
}