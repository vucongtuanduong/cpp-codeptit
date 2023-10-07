#include <iostream>
#include <vector>
using namespace std;
void testCase();
int solve(vector <int> a, int n);
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve(a, n);
}
int solve(vector <int> a, int n) {
    vector<int> N(n, 1);
    vector<int> B(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                N[i] = max(N[i], N[j] + 1);
            }
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (a[i] > a[j]) {
                B[i] = max(B[i], B[j] + 1);
            }
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (N[i] + B[i] - 1 > max) {
            max = N[i] + B[i] - 1;
        }
    }
    return max;
}