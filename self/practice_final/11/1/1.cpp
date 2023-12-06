#include <bits/stdc++.h>
using namespace std;
map<long long ,int> fibo;
long long a[92];
void testCase();
void init();
//cu the
void init() {
    a[0] = 0;
    a[1] = 1;
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i < 92; i++) {
        a[i] = a[i - 1] + a[i - 2];
        fibo[a[i]] = 1;
    }
}
void testCase() {
    long long n;
    cin >> n;
    if (fibo[n] == 1) {
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
}