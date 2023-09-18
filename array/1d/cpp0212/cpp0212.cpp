#include <iostream>
#include <cmath>
using namespace std;
const int MOD = 1e9 + 7;
void testCase();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n, x;
    cin >> n >> x;
    long long res = 0;
    int a[n];
    for (int i = n -1; i >= 0; i--) {
        cin >> a[i];
    }
    long long power = 1;
    for (int i = 0; i < n; i++) {
        res += a[i] * power;
        res %= MOD;
        power *= x;
        power %= MOD;

    }
    cout << res;
}