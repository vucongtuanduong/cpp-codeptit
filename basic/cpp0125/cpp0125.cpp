#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
const int MAX = 1e6 + 1;
vector<bool> prime(MAX, true);
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
    testCase();
}
void testCase() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    sieve();
    for (int i = a + 1; i< b; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
}
void sieve() {
    prime[0] = prime[1] = false;
    for (int i =2 ;i < sqrt(MAX); i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = false;
            }
        }
    }
}