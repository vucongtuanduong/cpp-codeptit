#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int isPrime(long long n);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    long long l, r;
    cin >> l >> r;
    long long sqrtL = sqrt(l);
    long long sqrtR = sqrt(r);
    // if (sqrtL * sqrtL == l) {
    //     sqrtL++;
    // }
    // if (sqrtR * sqrtR == r) {
    //     sqrtR--;
    // }
    int count = 0;
    for (int i = sqrtL; i <= sqrtR; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    cout << count;
}
int isPrime(long long n) {
    if (n < 2) {
        return 0;
    }
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
    
}