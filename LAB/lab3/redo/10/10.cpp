#include <bits/stdc++.h>
using namespace std;


void testCase() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int checkSum = 0;
    for (int i = 0; i < n; i++) {
        sum -= a[i];
        if (i != 0) {
            
            if (sum == checkSum) {
                cout << i + 1;
                return;
            }
            
        }
        checkSum += a[i];
        
    }
    cout << "-1";
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    // testCase();
}