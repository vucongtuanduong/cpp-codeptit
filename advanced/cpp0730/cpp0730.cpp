#include <iostream>
#include <climits>
using namespace std;
void testCase();
int main (){
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
    int min = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (min < a[i]) {
            min = a[i];
        }
    }
    if (min <= 0) {
        cout << min;
        return;
    } else {
        long long sum = 0;
        long long max = INT_MIN;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (max < sum) {
                max = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        cout << max;
    }
    
}