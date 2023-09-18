#include <iostream>
using namespace std;
void testCase() ;
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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >>a[i];
    }
    // int res = -1;
    
    for (int i = 1; i < n - 1; i++) {
        int left = 0, right = 0;
        for (int j = 0; j < i; j++) {
            left += a[j];
        }
        for (int j = i + 1; j < n; j++) {
            right += a[j];
        }
        if (left == right) {
            cout << i + 1 ;
            return;
        }
        // left = 0;
        // right = 0;
    }
    cout << "-1";
}
void testCase2() {
    int n;
    cin >> n;
    int a[n];
    int sum  = 0;
    int sumCheck = 0;
    for (int i = 0; i < n; i++) {
        cin >>a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        sum -= a[i];
        if (i != 0) {
            sumCheck += a[i - 1];
        }
        if (sumCheck == sum) {
            cout << i + 1 ;
            return;
        }
    }
    cout << "-1";

}