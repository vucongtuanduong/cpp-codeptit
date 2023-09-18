#include <bits/stdc++.h>
using namespace std;
void testCase();
void deleteArray(int **a, int rows);
void testCase2();//bai cua TQB
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
        
    }
}
void testCase() {
    int n;
    cin >> n;
    int **a;
    a = new int *[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n;j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || i == 0 || i == n - 1 || j == n - 1) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    deleteArray(a, n);

}
void deleteArray(int **a, int rows) {
    for (int i = 0; i < rows; i++) {
        delete [] a[i];
    }
    delete []a;
}
void testCase2() {
    
}