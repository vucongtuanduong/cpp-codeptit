#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m;
    cin >> n >> m;
    int a[n];
    map<int,int> mp;
    int maxVal = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        maxVal = max(maxVal, mp[a[i]]);
    }
    int secondMax = -1;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] != maxVal) {
            if (mp[a[i]] > secondMax ) {
                secondMax = mp[a[i]];
                res = a[i];
            }
        }
    }
    if (res == 0) {
        cout << "NONE";
    } else {
        cout << res;
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}