#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
void testCase();
void testCase2();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase2();
        cout << endl;
    }
}
void testCase() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(a[i] - a[j]) == x) {
                cout << "1";
                return;
            }
        }
    }
    cout << "-1";

}
void testCase2()  {
    int n, x;
    cin >> n >> x;
    map<int, int> m;
    int a[n];
    for (int i  = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]] = 1;
    }
    for (int i = 0; i < n; i++) {
        a[i] += x;
        if (m[a[i]] == 1) {
            cout << "1";
            return;
        }
    }
    cout << "-1";
}