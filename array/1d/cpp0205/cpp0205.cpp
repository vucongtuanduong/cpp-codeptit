#include <bits/stdc++.h>
using namespace std;
void testCase();

int main () {
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
    vector<int> a(n);
    for (int i = 0 ;i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[n - 1];

}
