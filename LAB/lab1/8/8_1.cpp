#include <iostream>
#include <cmath>
using namespace std;
void testCase();

void testCase() {
    long long n;
    cin >> n;
    long long res = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            res += i;
            res += n / i;
        }
    }
    int x = sqrt(n);
    if (x * x == n) {
        res -= x;
    }
    cout << res;
}

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
    return 0;
}