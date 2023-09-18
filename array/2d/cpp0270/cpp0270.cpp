#include <iostream>
using namespace std;
void testCase();
int convolution(int a[300][300], int b[3][3],int rows, int columns);
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
    int a[300][300];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }
    int b[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }
    long long res = 0;
    for (int i = 0; i <= rows - 3; i++) {
        for (int j = 0; j <= columns - 3; j++) {
            res += convolution(a,b,i, j);
        }
    }
    cout << res;

}
int convolution(int a[300][300], int b[3][3],int rows, int columns) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += (a[i + rows][j + columns] * b[i][j]);
        }
    }
    return sum;
}