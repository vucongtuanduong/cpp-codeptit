#include <iostream>
#include <cmath>
#include <vector>
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
    long long n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int x = i;
            long long temp = n / x;
            if (temp % 2 == 0) {
                count++;
            }
            if (x % 2 == 0) {
                count++;
            }
        }
    }
    int sqrtN = sqrt(n);
    if (sqrtN * sqrtN == n && sqrtN % 2 == 0) {
        count--;
    }
    cout << count;
}
