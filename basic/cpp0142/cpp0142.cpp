#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int gcd(int a, int b);
int check(int a, int b) ;
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
    int x;
    cin >> x;
    int count = 0;
    for (int i = 1; i <= x; i++) {
        if (check(i, x)) {
            count++;
        }
    }
    if (isPrime(count)) {
        cout << "1";
    } else {
        cout << "0";
    }
}
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int check(int a, int b) {
    if (gcd(a, b) == 1) {
        return 1;
    }
    return 0;
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