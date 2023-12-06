#include <bits/stdc++.h>
using namespace std;
void testCase();
//cu the
void testCase() {
    long long n;
    cin >> n;
    long long max = -1;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            max = i;
            n /= i;
        }
    }
    if (n > 1) {
        max = n;
    }
    cout << max;
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