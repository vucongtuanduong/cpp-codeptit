#include <iostream>
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
    long long a[n];
    long long sum = 0;
    long long max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (sum > max) {
            max = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << max;
}