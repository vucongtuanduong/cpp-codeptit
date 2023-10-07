#include <iostream>
#include <cmath>
#include <climits>

using namespace std;
int log2(int x);
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
int log2(int x) {
    return (int)((log(x)) / log(2));
}
void testCase() {
    int n;
    cin >> n;
    int a[n];
    int temp = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // cout << "log2(a[i]) = " << log2(a[i]) << endl;
        temp = max(temp, log2(a[i]));
    }
    // cout << "temp  = " << temp << endl;
    int count = 0;
    for (int i = 0; i < n; i++) {
        while (a[i]) {
            count += a[i] % 2;
            a[i] /= 2;
        }
    }
    // cout << "count = " << count << endl;
    cout << count + temp;
}