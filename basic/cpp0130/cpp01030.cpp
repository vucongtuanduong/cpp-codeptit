#include <iostream>
#include <cmath>
using namespace std;
void testCase();
void pt(long long n);
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
    cin >> n;
    pt(n);
}
void pt(long long n) {
    for (long long i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1) {
        cout << n ;
    }
}