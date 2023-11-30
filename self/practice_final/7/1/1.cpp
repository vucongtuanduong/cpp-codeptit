#include <bits/stdc++.h>
using namespace std;
void testCase();
long long sumDivisor(long long n);
//explicit
long long sumDivisor(long long n) {
    long long x = n;
    long long res = 1;
    int sqrtN = sqrt(n);
    for (int i = 2; i < sqrt(n); i++) {
        
        if (n % i == 0) {
            res += i;
            res += n / i;
            // n /= i;
        }
    }
    if (sqrtN * sqrtN == n) {
        res += sqrtN;
    }
    return res;
}
void testCase() {
    long long n;
    cin >> n;
    if (n >= 1e12) {
        cout << "0";
        return;
    }
    long long s  = sumDivisor(n);
    if (s == n) {
        cout << "1";
    } else {
        cout << "0";
    }
    // cout << sumDivisor(n) << endl;

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
}