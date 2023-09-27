#include <iostream>
#include <map>
#include <climits>
using namespace std;
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
    cin >> n;
    int a[n], b[n + 1] = {INT_MIN};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        b[i] = max(b[i + 1], a[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++)     {
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (b[m] >= a[i]) {
                l = m + 1;
                res = max(res, m - i);
            } else {
                r = m - 1;
            }
        }
    }
    cout << res;
} 