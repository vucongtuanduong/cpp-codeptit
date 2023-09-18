#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
void testCase2();
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
    int count0 = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            cout << a[i] << " ";
            current++;
        }
    }
    count0 = n - current;
    for (int i = 0; i < count0; i++) {
        cout << "0 ";
    }
}
void testCase2() {
    
}