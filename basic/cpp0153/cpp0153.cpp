#include <iostream>
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
    long long k;
    cin >> n >> k;
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += (i % k);
    }
    cout << res;
}
