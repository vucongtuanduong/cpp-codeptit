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
void testCase() {
    int rows, columns;
    cin >> rows >> columns;
    int a[rows][columns];
    int res[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
            res[i][j] = 0;
        }
    }
    for (int i = rows - 1; i >= rows / 2; i--) {
        for (int j = rows - i; j <= i; j++) {
            res[rows - i - 1][j] = a[rows - i - 1][j - 1];
            res[i][j - 1] = a[i][j];
            res[j][i] = a[j - 1][i];
            res[j - 1][rows - i - 1] = a[j][rows - i - 1];
        }
    }
    for (int i = 0; i < rows ; i++) {
        for (int j = 0;j < columns; j++) {
            if (res[i][j] == 0) {
                cout << a[i][j] << " ";
            } else {
                cout << res[i][j] << " ";
            }
        }
    }
}