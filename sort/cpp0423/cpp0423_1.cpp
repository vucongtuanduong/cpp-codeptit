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
    int n, k;
    cin >> n >> k;
    int a[n];
    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
        if (a[i] <= k) {
            left++;
        }
    }

    
    for (int i = 0; i < left; i++) {
        if (a[i] > k) {
            right++;
            
        } 
    }
    int res = right;
    for (int i = 0, j = left; j < n; i++, j++) {
        if (a[i] > k) {
            right--;
        }
        if (a[j] > k) {
            right++;
        }
        res = min(res, right);
    }
    cout << res;
}