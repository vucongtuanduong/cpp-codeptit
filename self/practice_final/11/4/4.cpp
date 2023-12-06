#include <bits/stdc++.h>
using namespace std;

void testCase();

//cu the

void testCase() {
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    map<int, int> m1, m2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m1[a[i]]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        m2[b[i]]++;
    }
    for (int i = 0; i < m; i++) {
        while (m1[b[i]] > 0) {
            cout << b[i] << " ";
            m1[b[i]]--;
        }
    }
    for (auto x : m1) {
        while (x.second > 0) {
            cout << x.first << " ";
            x.second--;
        }
    }

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