#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,long long> a, pair <long long,long long> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}
void testCase() {
    long long n;
    cin >> n;
    long long max = -1;
    vector<pair<long long,long long>> res;
    for (long long i = 2; i <= sqrt(n); i++) {
        long long count = 0;
        while (n  % i == 0) {
            count++;
            n /= i;
        }
        if (count != 0) {
            res.push_back(make_pair(i, count));
        }
        
    }
    if (n > 1) {
        res.push_back(make_pair(n, 1));
    }
    sort(res.begin(), res.end(), cmp);
    for (auto x : res) {
        cout << x.first << " " << x.second;
        return;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}