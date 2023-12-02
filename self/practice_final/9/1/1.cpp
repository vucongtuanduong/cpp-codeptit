#include <bits/stdc++.h>
using namespace std;
void testCase();
//explicit
void testCase() {
    int n;
    cin >> n;
    long long a[n];
    long long b[n];
    set<long long> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i] * a[i];
        s.insert(b[i]);
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s.count(b[i] + b[j]) >= 1) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";

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