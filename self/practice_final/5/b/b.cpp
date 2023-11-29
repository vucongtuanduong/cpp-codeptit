#include <bits/stdc++.h>
using namespace std;
void testCase();
//explicit
void testCase() {
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long res = 0;
    for (int i = 0; i < n; i++) {
        auto it = upper_bound(a + i + 1, a + n, k - a[i]);//a + index(index where you find out that value)
        res += a + n - it;
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