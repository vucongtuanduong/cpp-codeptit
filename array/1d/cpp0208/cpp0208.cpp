#include <iostream>
#include <algorithm>
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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n ;i++) {
        cin >> a[i];
    }
    sort(a, a + n );
    cout << a[k - 1];
}
