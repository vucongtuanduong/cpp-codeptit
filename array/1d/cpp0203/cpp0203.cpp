#include <bits/stdc++.h>
using namespace std;
void testCase();
void testCase2();
int main () {
    int t;
    cin >> t;

    while (t--) {
        testCase2();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x >= 0) {
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    int l = a.size();
    int right = a[l - 1];
    // cout << right << endl;
    int current = 0;
    for (int i = 0; i <= right; i++) {
        // cout << a[i - 1] << endl;
        if (a[current] != i) {
            cout << i;
            return;
        }
        current++;
    }
    cout << right + 1;

}
void testCase2() {
    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }
    for (int i = 1; i <= n + 1; i++) {
        if (se.count(i) == 0) {
            cout << i;
            return;
        }
    }
}