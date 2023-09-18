#include <bits/stdc++.h>
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
    sort(a.begin(), a.end());
    vector<int> b;
    for (int i = 0; i < n - 1; i++) {
        
        int res = abs(a[i + 1] - a[i]);
        b.push_back(res);
    
        
    }
    sort(b.begin(), b.end());
    cout << b[0];

}
