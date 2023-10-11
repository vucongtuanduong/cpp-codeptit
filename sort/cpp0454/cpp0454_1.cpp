#include <iostream>
#include <algorithm>
#include <set>
#include <map>
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
    long long a[n];
    // long long  b[n];
    // map<long long,int> m;
    set<long long> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = a[i] * a[i];
        // m[a[i]] = 1;
        s.insert(a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // if (m[a[i] + a[j]]) {
            //     cout << "YES";
            //     return;
            // }
            if (s.count(a[i] + a[j]) >= 1) {
                cout << "YES";
                return;
            }
        }
        
    }
    cout << "NO";
}