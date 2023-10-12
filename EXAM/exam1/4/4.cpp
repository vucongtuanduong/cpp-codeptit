#include <bits/stdc++.h>
using namespace std;
void testCase();
int isPalindrome(long long n) {
    long long res = 0;
    long long x = n;
    while (x > 0) {
        res = res * 10 + (n % 10);
        x /= 10;
    }
    return (res == n);
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    long long right = pow(10, n) - 1;
    long long left = pow(10, n - 1);
    long long res = 0;
    for (long long i = left; i <= right; i++) {
        if (isPalindrome(i)) {
            res += i;
        }
    }
    cout << res;

}