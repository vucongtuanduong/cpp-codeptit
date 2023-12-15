#include <bits/stdc++.h>
using namespace std;
void testCase();

//cu the
void testCase() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> res;
    int rb = 0, re = n - 1, cb = 0, ce = m - 1;
    while (rb < re && cb < ce) {
        for (int j = cb; j < ce; j++) {
            res.push_back(a[rb][j]);
        }
        for (int i = rb; i < re; i++) {
            res.push_back(a[i][ce]);
        }
        for (int j = ce; j > cb; j--) {
            res.push_back(a[re][j]);
        }
        for (int i = re; i > rb; i--) {
            res.push_back(a[i][cb]);
        }
        rb++;
        re--;
        cb++;
        ce--;
    }
    if (rb == re && cb == ce) {
        res.push_back(a[rb][cb]);
    } else if (rb == re && cb < ce) {
        for (int i = cb; i <= ce; i++) {
            res.push_back(a[rb][i]);
        } 
    } else if (rb < re && cb == ce) {
        for (int i = rb; i <= re; i++) {
            res.push_back(a[i][cb]);
        }
    }
    // cout << res.size() << endl;
    // for (auto x : res) {
    //     cout << x << " ";
    // }
    cout << res[k - 1];
    
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}