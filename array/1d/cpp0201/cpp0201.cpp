#include <iostream>
#include <vector>
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
void testCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int>b;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
        
            int res = abs(a[ i + 1] - a[i]);
            // cout << res << endl;
            b.push_back(res);
        
        
    }
    sort(b.begin(), b.end());
    // for (int i = 0; i < n; i++) {
    //     cout << b[i] << " ";
    // }
    if (b.size() == 0) {
        cout << a[0];
    } else {
        cout << b[0];
    }
    // cout << b[0];

}
