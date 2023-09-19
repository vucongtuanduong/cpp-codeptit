#include <iostream>
using namespace std;
void testCase();
int findSubSquare(char mat[][100], int n);
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
    int n;
    cin >> n;
    char mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cout << findSubSquare(mat, n);
    
}
int findSubSquare(char mat[][100], int n) {
    int hor[100][100],ver[100][100];
    hor[0][0] = ver[0][0] = (mat[0][0] == 'O');
    for (int i  = 0; i < n; i++) {
        for (int j  = 0; j < n; j++) {
            if (mat[i][j] == 'O') {
                hor[i][j] = ver[i][j] = 0;
            } else {
                hor[i][j] = (j == 0) ? 1 : hor[i][j - 1] + 1;
                ver[i][j] = (i == 0) ? 1 : ver[i - 1][j] + 1;
            }
        }
    }
    int max = 0;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n - 1; j >= 1; j--) {
            int small = min(hor[i][j], ver[i][j]);
            while (small > max) {
                if (hor[i - small + 1][j] >= small && ver[i][j - small + 1] >= small) {
                    max = small;
                }
                small--;
            }
        }
    }
    return max;
}