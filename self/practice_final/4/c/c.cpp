#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
long long f1[1005][1005], f2[1005][1005];
void testCase();//TLE
void testCase2();//AC
//explicit
void testCase2() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            f1[i][j] = f1[i][j - 1] + a[i][j];
            f2[i][j] = f2[i - 1][j] + a[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int choice;
        cin >> choice;
        if (choice == 1) {
            int x, y, z;
            cin >> x >> y >> z;
            cout << f1[x][z] - f1[x][y - 1] << endl;
        } else if (choice == 2) {
            int u,v,t;
            cin >> u >> v >> t;
            cout << f2[t][u] - f2[v - 1][u] << endl;
        }
    }
}
void testCase() {
    int rows,columns;
    cin >> rows >> columns;
    // cout << rows << " " << columns ;
    int **a = new int *[rows];
    for (int i = 0 ; i < columns; i++) {
        a[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
            // cout << a[i][j] << " ";
        }
        // cout << endl;
    }
    int q;
    cin >> q;
    while (q--) {
        long long res = 0;
        int choice;
        cin >> choice;
        if (choice == 1) {
            int x, y,z;
            cin >> x >> y >> z;
            for (int i = y - 1; i <= z - 1; i++) {
                res += a[x - 1][i];
                // cout << a[x - 1][i] << " ";
            }
            // cout << endl;'
            cout << res << endl;
        } else if (choice == 2) {
            int u,v,t;
            cin >> u >> v >> t;
            for (int i = v - 1; i <= t - 1; i++) {
                // cout << a[i][u - 1] << " ";
                res += a[i][u - 1];
            }
            // cout << endl;
            cout << res << endl;
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase2();
}