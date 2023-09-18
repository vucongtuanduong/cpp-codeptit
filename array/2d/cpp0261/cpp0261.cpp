#include <iostream>
using namespace std;
void testCase();
void multiplyArray(int **a, int **b,int n, int m);
int main () {
    // int t;
    // cin >> t;
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    int **a;
    int **b;
    a = new int *[n];
    
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    b = new int *[m];
    for (int i = 0; i < m; i++) {
        b[i] = new int[m];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    multiplyArray(a, b,n,m);

}
void multiplyArray(int **a, int **b, int n, int m) {
    int c[n][n];
    for (int i = 0; i < n; i++) {
        int k = i % m;
        int x;
        
        for (int j = 0; j < n; j++) {
            x = j % m;
            c[i][j] = a[i][j] * b[k][x];
            
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}