#include <iostream>
#include <cmath>
using namespace std;
void testCase();
bool isPrime(int n) {
    if (n < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}
int main () {
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
