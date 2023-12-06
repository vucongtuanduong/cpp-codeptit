#include <bits/stdc++.h>
using namespace std;
void testCase();
//cu the
void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int min = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff = a[i] - a[i - 1];
        if (diff < min) {
            min = diff;
        }
    }
    cout << min;
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
    // testCase();
} 