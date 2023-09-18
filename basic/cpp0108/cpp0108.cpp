#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
const long long MAX = 1e7 + 1;
vector<bool>prime(MAX, true);
void testCase();
int isPrime(long long n);
int isIncrese(long long n);
int isDecrease(long long n);
void sieve();
int main () {
    int t;
    cin >> t;
    sieve();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    
    long long left = pow(10, n - 1);
    long long right  = pow(10, n);
    long long count = 0;
    for (long long i = left; i < right; i++) {
        if ( (isIncrese(i) || isDecrease(i))) {
            // cout << i << " ";
            if (isPrime(i)) {
                count++;
            }
            
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
int isIncrese(long long n) {
    int digit = n % 10;
    n /= 10;
    while (n > 0) {
        
        int tempDigit = n % 10;
        if (tempDigit <= digit) {
            return 0;
        }
        n /= 10;
        digit = tempDigit;
    }
    return 1;
}
int isDecrease(long long n) {
    int digit = n % 10;
    n /= 10;
    while (n > 0) {
        int tempDigit = n % 10;
        if (tempDigit >= digit) {
            return 0;
        }
        n /= 10;
        digit = tempDigit;
    }
    return 1;
}
void sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                prime[j] = false;
            }
        }
    }
}