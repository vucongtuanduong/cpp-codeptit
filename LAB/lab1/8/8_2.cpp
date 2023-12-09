#include <iostream>
#include <cmath>
using namespace std;
void testCase();

void testCase() {
    long long n;
    cin >> n;
    long long res = 0;
    long long sqrtN = sqrt(n);
    long long x = n;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            res += i;
            res += n / i;
        }
    }
    if (sqrtN * sqrtN == x) {
        res -= sqrtN;
    }
    cout << res ;
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