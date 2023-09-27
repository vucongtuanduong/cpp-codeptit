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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = n- 1;
    int res = 0;
    while (l <= r) {
        if (a[l] == a[r]) {
            l++;
            r--;
        } else if (a[l] < a[r]) {
            l++;
            a[l] += a[l - 1];
            res++;
        } else {
            r--;
            a[r] += a[r + 1];
            res++;
        }
    }
    cout << res;
}