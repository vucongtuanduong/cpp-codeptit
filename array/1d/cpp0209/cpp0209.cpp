#include <bits/stdc++.h>
using namespace std;
void testCase();
void query(int *a);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
        
    }
}
void testCase() {
    int n,q;
    cin >> n >> q;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (q--) {
        query(a);
        cout << endl;
    }
    delete []a;
}
void query(int *a) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    int sum = 0;
    for (int i = l; i <= r; i++) {
        sum += a[i];
    }
    cout <<  sum;
}