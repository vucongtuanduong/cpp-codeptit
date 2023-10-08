#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    // cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }

    // testCase();
    
}
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
    if (sqrt(n) * sqrt(n) == n) {
        res -= sqrt(n);
    }
    cout << res;
}
