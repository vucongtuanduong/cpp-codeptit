#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int isPrime(int n);
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
}
void testCase() {
    long long n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    cout << count;
}
int isPrime(int n) {
    if (n < 2) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}