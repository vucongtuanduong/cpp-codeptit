#include <bits/stdc++.h>
using namespace std;
map<long long, int> fibo;
int c[100];
void testCase();
void init();
//explicit 
void init() {
    fibo[0] = 1;
    fibo[1] = 1;
    c[0] = 0;
    c[1] = 1;
    for (int i = 2; i < 92; i++) {
        c[i] = c[i - 1] + c[i - 2];
        fibo[c[i]] = 1;
    }
}
void testCase() {
    
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (fibo[a[i]] == 1) {
            cout << a[i] << " ";
        }
    }
    // cout << res;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
}