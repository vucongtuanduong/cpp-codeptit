#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000005;
int *prime = new int[MAX];
int f[MAX];
void testCase();
void sieve();
//explicit
void sieve() {
    for (int i = 0; i < MAX; i++) {
        prime[i] = 0;
    }
    prime[0] = 1;
    prime[1] = 1;
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= MAX; j += i) {
                prime[j] = 1;
            }
        }
    }
    f[0] = 0;
    f[1] = 0;
    int dem = 0;
    for (int i = 2; i < MAX; i++) {
        if (prime[i] == 0) {
            dem++;
        }
        f[i] = dem;
    }
}
void testCase() {
    int l, r;
    cin >> l >> r;
    if (l == 0) {
        cout << f[r] << endl;
    } else {
        cout << f[r] - f[l - 1] << endl;
    }
    
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