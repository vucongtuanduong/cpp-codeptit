#include <iostream>
#include <string>
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
    int tempDigit = n % 10;
    n /= 10;
    while (n > 0) {
        int currentDigit = n % 10;
        if (abs(currentDigit - tempDigit) != 1) {
            cout << "NO";
            return;
        }
        n /= 10;
        tempDigit = currentDigit;
    }
    cout << "YES";
}
