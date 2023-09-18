#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100005;
bool prime[MAX];
void testCase();
bool isPrime(long long n) {
    if (n < 2) {
        return false;
    } else {
        for (long long i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}
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
    int a, b;
    cin >> a >> b;
    sieve();
    for (int i =a; i<= b; i++) {
        if (!prime[i]) {
            cout << i << " ";
        }
    }
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