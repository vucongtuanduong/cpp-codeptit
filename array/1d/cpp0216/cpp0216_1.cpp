#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
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
    int l,r;
    cin >> l >> r;
    bool decrease = false;
    for (int i = l; i < r; i++) {
        if (a[i] > a[i + 1]) {
            decrease = true;
        } else {
            if (decrease) {
                cout << "No";
                return ;
            }
        }
    }
    cout << "Yes";
}