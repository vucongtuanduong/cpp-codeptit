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
    // testCase();
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    if (n <= 445 ) {
        cout << "-1";
        return;
    } else if (n >= 450 && n <= 520) {
        cout << "7";
        return;
    } else if (n >= 525 && n <= 595) {
        cout << "8";
    } else if (n >= 600 && n <= 725) {
        cout << "9";
    } else if (n >= 730) {
        cout << "10";
    }

}