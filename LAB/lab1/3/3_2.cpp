#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] ++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] >= 2) {
            cout << a[i];
            return;
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