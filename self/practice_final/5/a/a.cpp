#include <bits/stdc++.h>
using namespace std;
int *prime = new int[1000005];
void testCase();
void sieve();
//explicit
void sieve() {
    for (int i = 0; i < 1000005; i++) {
        prime[i] = 0;
    }
    prime[0] = 1;
    prime[1] = 1;
    for (int i = 2; i <= sqrt(1000005); i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= 1000005; j += i) {
                prime[j] = 1;
            }
        }
    }
}
void testCase() {
    int l, r;
    cin >> l >> r;
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (prime[i] == 0) {
            count++;
        }
    }
    cout << count << endl;
    
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    sieve();
    while (t--) {
        testCase();
    }
    
}