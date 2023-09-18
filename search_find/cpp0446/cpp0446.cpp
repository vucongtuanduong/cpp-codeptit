#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
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
void testCase( ){
    int n;
    cin >> n;
    int a[n];
    int res = 2 * 1e6;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    // sort(a, a + n);
    for (int i =0 ; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(a[j] + a[i]) < abs(res)) {
                res = a[i] + a[j];
            }
        }
    }
    cout << res;
}