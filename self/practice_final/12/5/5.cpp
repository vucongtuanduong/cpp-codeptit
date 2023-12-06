#include <bits/stdc++.h>
using namespace std;
void testCase();
//cu the
void testCase() {
    int n, k;
    cin >> n ;
    // cout << "n : " << n << endl;
    cin >> k;
    // cout << "k: " << k << endl;
    // cout << n << ", k : " << k << endl;
    int a[n];
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        // cout << a[i] << " ";
    }
    // cout << endl;
    sort(a, a + n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        // cout << a[i] << " ";
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                count++;
            }
        }
    }
    
    cout << count;
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
    // testCase();
} 