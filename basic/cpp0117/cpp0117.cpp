#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
void testCase();
void sumDigits(int n);
int digits(int n);
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
    sumDigits(n);
}
void sumDigits(int n) {
    int res = 0;

    while (digits(n) != 1) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
        res += sum;
    }
    cout << n;

}
int digits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}