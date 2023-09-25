#include <iostream>
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
    int n, k;
    cin >> n >> k;
    int a[n];
    int s = 0, b= 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= k) {
            s++;
        }
    }
    for (int i = 0; i < s; i++) {
        if (a[i] > k) {
            b++;
        }
    }
    int res = b;
    for (int i = 0, j = s; j < n; i++, j++) {
        if (a[i] > k) {
            b--;
        } 
        if (a[j] > k) {
            b++;
        }
        res = min(res, b);
    }
    cout << res;
}