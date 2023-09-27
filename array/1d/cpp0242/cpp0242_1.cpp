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
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        int x = 0;
        int y = 0;
        for (int j = i; j < n; j++) {
            x += a[j];
            y += b[j];
            if (x == y) {
                if (max < (j - i + 1)) {
                    max = j -i + 1;
                }
            }
        }
    }
    cout << max;
}