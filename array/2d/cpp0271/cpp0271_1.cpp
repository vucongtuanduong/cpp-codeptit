#include <iostream>
using namespace std;
void testCase();
int main () {
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
    int rows, columns , n;
    cin >> rows >> columns >> n;
    int a[rows][columns];
    int res[100][100];
    memset(k , 1, sizeof(k));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i <= rows % n; i++) {
        for (int j = 0; j <= columns % n; j++) {
            for (int k = 0; k < n; k++) {
                for (int m = 0; m < )
                res[k][k] = () / ( n * n);
            }
        }
    }

}