#include <bits/stdc++.h>
using namespace std;
void testCase() {
    long long n;
    cin >> n;
    long long a[n];
    map<long long,long long> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i] % 28]++;
    }
    // for (auto x : mp) {
    //     cout << x.first << endl;
    // }
    long long res = 0;
    for (long long i = 0; i <= 27; i++) {
        if (mp[i]) {
            if (i == 0 || i == 14) {
                res += mp[i] * (mp[i] - 1) / 2;
                mp[i] = 0;
            } else {
                res += mp[i] * mp[28 -i];
                mp[i] = 0;
                mp[28 - i] = 0;
            }
        } 
    }
    cout << res;
}
int main () {
    freopen("input.txt", "r", stdin);
    testCase();
}