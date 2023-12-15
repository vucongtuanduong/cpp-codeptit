#include <bits/stdc++.h>
using namespace std;
void testCase();
void init();
const int MAX = 1005;
int prime[MAX] = {0};
vector<int> res;
//cu the
void init() {
    prime[0] = 1;
    prime[1] = 1;
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < MAX; i++) {
        if (prime[i] == 0) {
            res.push_back(i);
        }
    }
}
void testCase() {
    int n;
    cin >> n;
    int a[n][n];
    int current = 0;
    int rb = 0, re = n - 1, cb = 0, ce = n - 1;
    while (rb < re && cb < ce) {
        for (int j = cb; j < ce; j++) {
            a[rb][j] = res[current++];
        }
        for (int i = rb; i < re; i++) {
            a[i][ce] = res[current++];
        }
        for (int j = ce; j > cb; j--) {
            a[re][j] = res[current++];
        }
        for (int i = re; i > rb; i--) {
            a[i][cb] = res[current++];
        }
        rb++;
        re--;
        cb++;
        ce--;
    }
    if (rb == re && cb == ce) {
        a[rb][cb] = res[current++];
    } else if (rb == re && cb < ce) {
        for (int i = cb; i <= ce; i++) {
            a[rb][i] = res[current++];
        } 
    } else if (rb < re && cb == ce) {
        for (int i = rb; i <= re; i++) {
            a[i][cb] = res[current++];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] <<  " ";
        }
        cout << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
}