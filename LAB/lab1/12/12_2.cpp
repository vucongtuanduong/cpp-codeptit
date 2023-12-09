#include <bits/stdc++.h>
using namespace std;
long long fibo[92];
map<long long,int> mp;
void init() {
    fibo[0] = 0;
    fibo[1] = 1;
    mp[0] = 1;
    mp[1] = 1;
    for (int i = 2; i < 92; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        mp[fibo[i]] = 1;
    }

}
void testCase() {
    long long n;
    cin >> n;
    if (mp[n] == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}