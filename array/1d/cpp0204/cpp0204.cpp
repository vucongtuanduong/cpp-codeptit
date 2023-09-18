#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 1e6 + 1;
int prime[MAX] = {0};
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
    int l, r;
    cin >> l >> r;
    int count = 0;
    for (int i = l; i <= r; i++) {
        // cout << prime[i] << endl;
        if (!prime[i]) {
            count++; 
        }
    }
    cout << count;
}
void sieve() {
    prime[0] = prime[1] = 1;
    for (int i = 2; i <= sqrt(MAX); i++) {
        // cout << prime[i] << endl;
        if (!prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = 1;
            }
        }
    }
}