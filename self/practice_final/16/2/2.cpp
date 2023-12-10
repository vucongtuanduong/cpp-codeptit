#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long n;
    cin >> n;

    long long arr[N];

    map<long long, long long> mp;

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i] % 28]++;
    }

    long long res = 0;

    for (long long i = 0; i <= 27; i++) {
        if (mp[i]) {
            //cout << i << " " << mp[i] << endl;
            if (i == 0 || i == 14) {
                res += mp[i] * (mp[i] - 1) / 2;
                mp[i] = 0;
            }
            else {
                res += mp[i] * mp[28 - i];
                mp[i] = 0;
                mp[28 - i] = 0;
            }
        }
    }

    cout << res << endl;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    testCase();
}