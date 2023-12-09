#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long n, d;
    cin >> n >> d;
    long long a[n];
    vector<long long> diff;
    for (long long i = 0; i < n ;i++) {
        cin >> a[i];
    }
    for (long long i = 1; i < n; i++) {
        long long x = a[i] - a[i - 1];
        diff.push_back(x);
    }
    long long res = 0;
    for (long long i = 0; i < diff.size(); i++) {
        if (diff[i] <= 0) {

            long long x = d - diff[i];
            long long times = (int) x / d;
            long long totalAdd = times * d;
            diff[i] += totalAdd;
            if (i != diff.size() - 1) {
                diff[i + 1] -= totalAdd;
            }
            
            res += times;
        }
    }
    cout << res;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}