#include <bits/stdc++.h>
using namespace std;
void testCase();
//cu the
void testCase() {
    long long n;
    cin >> n;
    int k;
    cin >> k;
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            count++;
            if (count == k) {
                cout << i ;
                return;
            }
            n /= i;
        }
    }
    if (n > 1) {
        count++;
    }
    if (count == k) {
        cout << n;
    } else {
        cout << "-1";
    }
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