#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100005;
bool prime[MAX];
void testCase();
bool isPrime(int n);
void sieve();
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
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << i << " " << n - i;
            return;
        }
    }
    // cout << "-1";
}
bool isPrime(int n) {
    if (n < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}
void sieve() {
    prime[0] = prime[1] = true;
    for (int i =2 ;i < sqrt(MAX); i++) {
        if (!prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = true;
            }
        }
    }
}