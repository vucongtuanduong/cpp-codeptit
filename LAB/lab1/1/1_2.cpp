#include <iostream>
#include <cmath>
using namespace std;

int sumDigits(long long n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int sumDivisor(long long n) {
    int res = 0;
    long long x = n;
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            res += sumDigits(i);
            n /= i;
        }
    }
    if (sqrtN * sqrtN == x) {
        res -= sumDigits(sqrtN);
    }
    if (n > 1) {
        res += sumDigits(n);
    }
    return res;
}
void testCase() {
    long long n;
    cin >> n;
    long long res1 = sumDigits(n);
    long long res2 = sumDivisor(n);
    if (res1 == res2) {
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
    // int t;
    // cin >> t;
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
    return 0;
}