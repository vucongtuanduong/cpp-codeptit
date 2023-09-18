#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
int main () {
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    int x = n * n;
    int a[x];
    int b[n][n];
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    } 
    sort(a, a + x);
    int rb = 0, re = n - 1, cb = 0, ce = n - 1;
    int current = 0;
    while(rb < re && cb < ce) {
        for (int i = cb; i < ce; i++) {
            b[rb][i] = a[current++];
        }
        for (int i = rb; i < re; i++) {
            b[i][ce] = a[current++];
        }
        for (int i = ce; i > cb; i--) {
            b[re][i] = a[current++];
        }
        for (int i = re; i > rb; i--) {
            b[i][cb] = a[current++];
        }
        rb++;
        re--;
        cb++;
        ce--;
    }
    if (rb == re && cb == ce) {
        b[rb][cb] = a[current++];
    } else if (rb == re && cb < ce) {
        for (int i = cb; i <= ce; i++) {
            b[rb][i] = a[current++];
        }
    } else if (cb == ce && rb < re) {
        for (int i = rb; i <= re; i++) {
            b[i][cb] = a[current++];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}