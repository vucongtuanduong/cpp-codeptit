//AC
#include <iostream>
#include <cmath>
using namespace std;
const int MOD = 1e9 + 7;
void testCase();

//explicitly
void testCase (){
    int n, x;
    cin >> n >> x;
    int a[n];
    long long res = 0;
    long long power = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        res += a[i] * power;
        res %= MOD;
        power *= x;
        power %= MOD;
    }
    cout << res;
}
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