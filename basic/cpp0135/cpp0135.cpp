#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
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
    cin >> n;
    int sqrtN = sqrt(n);
    if (sqrtN * sqrtN == n) {
        sqrtN--;
    }
    for (int i = 2; i <= sqrtN; i++) {
        if (isPrime(i)) {
            cout << i * i << " ";
        }
    }
}
