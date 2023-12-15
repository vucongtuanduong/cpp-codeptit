#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int max , min;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            max = i;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != b[i]) {
            min = i;
        }
    }
    cout << min + 1 << " " << max + 1 ;

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }

}