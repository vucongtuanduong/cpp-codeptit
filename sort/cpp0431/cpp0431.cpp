#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
int last_pos(int a[], int l, int r, int x);
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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long count = 0;
    for (int i = 0; i < n; i++) {
        int last = last_pos(a, i + 1, n  - 1, a[i] + k);
        if (last != -1) {
            count += last - i;
        }
    }
    cout << count;
}
int last_pos(int a[], int l, int r, int x) {
    int res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] < x) {
            res = mid;
            l  = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}