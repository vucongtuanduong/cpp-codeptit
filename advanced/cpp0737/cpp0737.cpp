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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = INT_MIN;
    int index = 0;
    for (int i = 0; i < n - k + 1; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += a[j];
        }
        if (sum > max) {
            max = sum;
            index  = i;
        }
    }
    for (int i = index; i < index + k; i++) {
        cout << a[i] << " ";
    }
}