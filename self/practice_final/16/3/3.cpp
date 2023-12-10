#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long n;
    cin >> n;
    long long a[n][n];
    map<long long,long long> m2;
    for (long long i = 0; i < n; i++) {
        set<long long> se;
        for (long long j = 0; j < n; j++) {
            cin >> a[i][j];
            se.insert(a[i][j]);
        }
        for (auto x : se) {
            m2[x]++;
        }
    }
    bool ok = false;
    for (auto x : m2) {
        if (x.second >= n) {
            cout << x.first << " ";
            ok = true;
        }
        
    }
    if (ok == false) {
        cout << "NOT FOUND";
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    testCase();
}