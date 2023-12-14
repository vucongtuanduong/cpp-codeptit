#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    long long count= 0;
    for (int i = 0; i < n; i++) {
        int index = lower_bound(a.begin() + i + 1, a.end(), k - a[i]) - (a.begin() + i + 1);
        // cout << index << endl;
        if (index != -1) {
            count += index;
        }
    }
    cout << count;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
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