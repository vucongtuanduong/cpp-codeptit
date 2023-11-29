#include <bits/stdc++.h>
using namespace std;
void testCase();
//explicit
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
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(a, a + n, b[i]);
        //tim ra vi tri dau tien cua phan tu >= b[i]
        if (it == a) {
            cout << "# ";
        } else {
            --it;
            cout << *it << " ";
        }
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}