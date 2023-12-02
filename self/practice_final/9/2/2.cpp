#include <bits/stdc++.h>
using namespace std;
void testCase();
void readArray(int *a, int n);
//explicit
void readArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void testCase() {
    int n1,n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1];
    int b[n2];
    int c[n3];
    int i = 0, j = 0, k = 0;
    

    readArray(a, n1);
    readArray(b, n2);
    readArray(c, n3);
    int ok = 0;
    while (i <= n1 && j <= n2 && k <= n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
            ok = 1;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
    if (ok == 0) {
        cout << "-1";
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