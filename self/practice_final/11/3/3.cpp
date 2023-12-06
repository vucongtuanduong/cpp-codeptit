#include <bits/stdc++.h>
using namespace std;

void testCase();

//cu the

void testCase() {
    int n;
    cin >> n;
    n = 4 * n;
    int c[n][n];
    int count = 1;
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n ;j++) {
            c[i][j] = count;
            count++;
        }
    }
    vector<int>a, b;
    int imin = 0, jmin = 0, imax = n - 1, jmax = n- 1;
    while (imin < imax && jmin < jmax) {
        for (int i = imin; i <= imax; i++) {
            a.push_back(c[i][jmin]);
        }
        jmin++;
        for (int i = imax; i >= imin; i--) {
            b.push_back(c[i][jmax]);
        }
        jmax--;
        for (int j = jmin; j <= jmax; j++) {
            a.push_back(c[imax][j]);
        }
        imax--;
        for (int j = jmax; j >= jmin; j--) {
            b.push_back(c[imin][j]);
        }
        imin++;

        for (int i = imax; i >= imin; i--) {
            a.push_back(c[i][jmax]);
        }
        jmax--;
        for (int i = imin; i <= imax; i++) {
            b.push_back(c[i][jmin]);
        }
        jmin++;
        for (int j = jmax; j >= jmin; j--) {
            a.push_back(c[imin][j]);
        }
        imin++;
        
        for (int j = jmin; j <= jmax; j++) {
            b.push_back(c[imax][j]);
        }
        imax--;
        

    }
    for (int i = b.size() - 1; i >= 0; i--) {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = a.size() - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    
    
}
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