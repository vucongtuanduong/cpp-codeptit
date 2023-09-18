#include <iostream>
using namespace std;
void testCase();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase () {
    int n;
    cin >> n;
    int a[n][n];
    int row[n];
    int col[n];
    int max = 0;
    int res = 0;
    int flag = 0;//0 is the max sum of row, 1 is the max sum of column
    for (int i = 0; i < n; i++) {
        row[i] = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            row[i] += a[i][j];
        }
        if (row[i] > max) {
            max = row[i];
            flag = 0;
        }
    }
    
    for (int j = 0; j < n; j++) {
        col[j] = 0;
        for (int i = 0; i < n ;i++) {
            col[j] += a[i][j];
        }
        if (col[j] > max) {
            max = col[j];
            flag = 1;
        }
    }
    if (flag == 0) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += a[i][j];
            }
            res += (max - sum);
        }
    } else if (flag == 1) {
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += a[i][j];
            }
            res += (max - sum);
        }
    }
    cout << res;
}