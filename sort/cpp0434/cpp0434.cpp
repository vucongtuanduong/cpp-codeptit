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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    
    // cout << a[0] << " " << a[n - 1] << endl;
    for (int i = 1; i < n - 1; i++) {
        // cout << a[i - 1] << " " << a[i + 1] << endl;
        a[i] = b[i - 1] * b[i + 1];
    }
    // cout << endl;
    a[0] *= b[1];
    a[n - 1] *= b[n - 2];
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}