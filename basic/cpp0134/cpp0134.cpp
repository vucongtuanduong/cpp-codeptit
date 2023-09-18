#include <iostream>
#include <cmath>
using namespace std;
void testCase();
void pt(long long n, int k);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    long long n;
    int k;
    cin >> n >> k;
    pt(n, k);
}
void pt(long long n, int k) {
    int count = 0;
    for (long long i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            // cout << i << " ";
            count++;
            if (count == k) {
                cout << i;
                return;
            }
            n /= i;
        }
    }
    if (n != 1) {
        // cout << n ;
        count++;
        if (count == k) {
            cout << n;
            return;
        }
    }
    cout << -1;
}