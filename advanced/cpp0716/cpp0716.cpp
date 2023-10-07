#include <iostream>
using namespace std;
void testCase();
int Try(int M[][21], int m, int n, int k);
int main ( ){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n, k;
    cin >> n >> k;
    int M[21][21];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }
    cout << Try(M, n - 1, n - 1, k);
}
int Try(int M[][21], int m, int n, int k) {
    if (n <0 || m < 0) {
        return 0;
    }
    if (m == 0 && n == 0) {
        return (k == M[m][n]);
    }
    return Try(M, m - 1, n, k - M[m][n]) + Try(M, m, n - 1, k - M[m][n]);
}