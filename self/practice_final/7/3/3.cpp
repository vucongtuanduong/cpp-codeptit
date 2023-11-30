#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int l = 1e9, r = -1;
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            if (i < l) {
                l = i;
            }
            if (i > r) {
                r = i;
            }
        }
    }
    cout << l + 1 << " " << r + 1;

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