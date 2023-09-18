#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void testCase();
const int MAX = 1e7 + 1;
vector<bool>prime(MAX, true);
void sieve();
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
    long long n;
    cin >> n;
    long long sqrtN = sqrt(n);
    // if (sqrtN * sqrtN == n) {
    //     sqrtN--;
    // }
    int count = 0;
    for (long long i = 2; i <= sqrtN; i++) {
        if (isPrime(i) && i * i <= n) {
            // cout << prime[i] << endl;
            // cout << i * i << " ";
            count++;
        }
    }
    cout << count;
}
void sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = false;
            }
        }
    }
}