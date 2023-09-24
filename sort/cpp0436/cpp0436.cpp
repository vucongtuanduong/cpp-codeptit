#include <iostream>
#include <map>
#include <algorithm>
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
        b[i] = a[i];
    }
    map<int,int> m;
    sort(b, b + n);
    for (int i = 0; i < n- 1; i++) {
        m[b[i]] = b[i + 1];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == b[n - 1]) {
            cout << "_ ";
        } else {
            cout << m[a[i]] << " ";
        }
    }

}