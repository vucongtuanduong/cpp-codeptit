#include <bits/stdc++.h>
using namespace std;
void testCase() {
    long long n, x;
    cin >> n >> x;
    int count = 0;
    for (long long  i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            // cout << "x: " << x << ", i : " << i << endl;
            long long s = x / i;
            if (s <= n && i <= n && i != s) {
                // cout << "x: " << x << ", i : " << i << endl;
                count += 2;
            } else if (s <= n && i <= n && i == s) {
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
    testCase();
}