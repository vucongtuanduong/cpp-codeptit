#include <iostream>
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
    long long x;
    cin >> n >> x;
    int p[n];
    for (int i = n - 1; i >= 0; i--) {
        cin >> p[i];
    }
    long long res = 0;
    long long power = 1;
    for (int i = 0; i < n; i++) {
        res += power * p[i];
        res %= MOD;
        power *= x;
        power %= MOD;
        
    }
    cout << res;
}