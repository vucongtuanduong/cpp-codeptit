#include <bits/stdc++.h>
using namespace std;
int x[100], n;
bool unused[100];
void result() {
    for (int i = 1; i <= n; i++) {
        cout << x[i] ;
    }
    cout << " ";
}
void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (unused[j]) {
            x[i] = j;
            unused[j] = false;
            if (i == n) {
                result();
            } else {
                Try(i + 1);
            }
            unused[j] = true;
        }
    }
}
void testCase() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        unused[i] = true;
    }
    Try(1);

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