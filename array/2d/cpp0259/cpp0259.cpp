#include <bits/stdc++.h>
using namespace std;
void testCase();
void deleteArray(int **a, int rows);
int ** createArray2D(int rows, int cols);
void scanArray2D(int **a, int rows, int cols);
void multiplyArray2D(int **a, int **b, int **c, int n, int m, int p);
void printArray2D(int **a, int rows, int cols);
void testCase2();//bai cua TQB
int main () {
    testCase();
}
void testCase() {
    int n,m,p;
    cin >> n >> m >> p;
    int **a = createArray2D(n, m);
    int **b = createArray2D(m, p);
    int **c = createArray2D(n, p);
    
    
    // createArray2D(a, n, m);
    // createArray2D(b, m, p);
    // createArray2D(c, n, p);
    scanArray2D(a, n, m);
    scanArray2D(b, m, p);
    
    multiplyArray2D(a, b, c, n, m, p);
    printArray2D(c, n, p);
    
    deleteArray(a, n);
    deleteArray(b, m);
    deleteArray(c, n);
}
int ** createArray2D(int rows, int cols) {
    int **a;
    a = new int *[rows];
    for (int i = 0; i < rows; i++) {
        a[i] = new int[cols];
    }
    return a;
}
void deleteArray(int **a, int rows) {
    for (int i = 0; i < rows; i++) {
        delete [] a[i];
    }
    delete []a;
}
void scanArray2D(int **a, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0;j < cols; j++) {
            cin >> a[i][j];
        }
    }
}
void multiplyArray2D(int **a, int **b, int **c, int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
        
    }
}
void printArray2D(int **a, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0;j < cols; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void testCase2() {
    
}