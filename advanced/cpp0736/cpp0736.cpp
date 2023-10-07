#include <iostream>
using namespace std;
void testCase();
int main ( ){
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
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long currentSum = 0;
    int start = 0, end = 0;
    int minLen = n + 1;
    while (end < n) {
        while (currentSum <= x && end < n) {
            currentSum += a[end++];
        }
        while (currentSum > x && start < n) {
            if (end - start < minLen) {
                minLen = end - start;
            }
            currentSum -= a[start++];
        }
    }
    if (minLen > n) {
        cout << "-1";
        return;
    } else {
        cout << minLen;
    }
}