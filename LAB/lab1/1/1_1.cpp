#include <iostream>
#include <cmath>
using namespace std;
int sumDigits(long long n);
int sumDigitDivisors(long long n);

int sumDigits(long long n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int sumDigitDivisors(long long n) {
    int res = 0;
    long long x = n;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            res += sumDigits(i);
            // cout << "i = " << i << " n = " << n << " res = " << res << endl;
            n /= i;
        }
    }
    if (n > 1) {
        res += sumDigits(n);
        // cout << "n = " << n << " res = " << res << endl;
    }
    if ((int)sqrt(x) * (int)sqrt(x) == x) {
        // cout << "sqrt(x) = " << sqrt(x) << " res = " << res << endl;

        res -= sumDigits(sqrt(x));
    }
    return res;
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long long n;
    cin >> n;
    int res1 = sumDigits(n);
    int res2 = sumDigitDivisors(n);
    // cout << res1 << endl;
    // cout << res2 << endl;
    if (res1 == res2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}