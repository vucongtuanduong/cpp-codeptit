#include <iostream>
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
void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = INT_MIN;
    for (int i = 0; i < n -1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] - a[i] > res) {
                res = a[j] - a[i];
            }
        }
    }
    if (res <= 0) {
        cout << "-1";
    } else {
        cout << res;
    }
}