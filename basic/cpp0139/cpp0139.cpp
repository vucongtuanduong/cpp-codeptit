#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int sumDivisors(int n);
int sumDigits(int n);
int isPrime(int n);
int main () {
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
    // cout << sumDigits(n) << " " << sumDivisors(n) << endl;
    if (!isPrime(n) && sumDigits(n) == sumDivisors(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
int sumDivisors(int n){
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            res += sumDigits(i);
            n /= i;
        }
    }
    if (n != 1) {
        res += sumDigits(n);
    }
    return res;
}
int sumDigits(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}