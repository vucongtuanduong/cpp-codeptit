#include <bits/stdc++.h>
using namespace std;
void testCase();
//explicit
void testCase() {
    long long n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        long long res = pow(i, 3);
        if (n % i == 0 && n % res == 0) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}