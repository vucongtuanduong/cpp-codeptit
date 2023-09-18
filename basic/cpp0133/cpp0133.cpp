#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
const int MAX = 1e6 + 1;
vector<bool> prime(MAX, 1);
void testCase();
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
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
}
void sieve() {
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(MAX) ;i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = 0;
            }
        }
    }
}