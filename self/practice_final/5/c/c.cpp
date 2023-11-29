#include <bits/stdc++.h>
using namespace std;
int *prime = new int[1000005];
void testCase();
int isPrime(int n);
//explicit
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
void testCase() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (isPrime(a[i][j]) == 1 && (i == j || (i + j) == n - 1)) {
                m[a[i][j]]++;
            }
        }
    }
    // int res = 0;
    // for (auto x : m) {
    //     res += x.first;
    // }
    // cout << res ;
    cout << m.size();
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
    
}