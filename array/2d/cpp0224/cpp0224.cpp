#include <iostream>
using namespace std;
int a[100][100];
const int x[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int y[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
void testCase();
void BFS(int r, int c,int &rows, int &columns);
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
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < rows; i++) {
        for (int j  = 0; j < columns; j++) {
            if (a[i][j] == 1) {
                res++;
                BFS(i , j,rows, columns);
            }
        }
    }
    cout << res;
}
void BFS(int r, int c, int &rows , int &columns) {
    for (int i = 0; i < 8; i++) {
        int tempx = x[i] + r;
        int tempy = y[i] + c;
        if (tempx >= 0 && tempx < rows && tempy >= 0 && tempy < columns && a[tempx][tempy] == 1) {
            a[tempx][tempy] = 0;
            BFS(tempx, tempy, rows, columns);
        }
    }
    
}