#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
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
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        for (int  j = 0; j < n; j++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    cout << a[k - 1];
}