#include <bits/stdc++.h>
using namespace std;
map<long long, int> prime;
const long long MAX = 1e12 + 1;
void testCase();
void sieve();
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
//explicit
void sieve(){ 
    prime[0] = 1;
    prime[1] = 1;
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = 1;
            }
        }
    }
}
void testCase() {
    long long n;
    cin >> n;
    int count = 0;
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (isPrime(i)) {
            count++;
        }
        // count++;
    }
    cout << count;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    // sieve();
    while (t--) {
        testCase();
        cout << endl;
    }
}