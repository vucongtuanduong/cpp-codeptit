#include <iostream>
using namespace std;
void testCase();
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
    int a[n];
    int b[n];
    for (int  i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        int x = 0, y = 0;
        for (int j = i; j < n; j++) {
            x += a[j];
            y += b[j];
            if (x == y) {
                if (max < j - i + 1) {
                    max = j - i + 1;
                }
            }
        }

    }
    cout << max ;
}