#include <iostream>
#include <cmath>
using namespace std;
void testCase();
bool check(int n);
int digits(int n);
int main () {
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    int left = pow(10, n - 1);
    int right = pow(10, n);
    int count = 0;
    for (int i = left; i < right; i++) {
        if (check(i)) {
            cout << i << " ";
            count++;
            if (count == 10) {
                cout << endl;
                count = 0;
            }
        }
    }
}
bool check(int n) {
    int digit = digits(n);
    if (digit % 2 == 1) {
        return false;
    } else {
        int even = 0;
        int odd = 0;
        while (n > 0) {
            int tmp = n % 10;
            if (tmp % 2 == 0) {
                even++;
            } else {
                odd++;
            }
            n /= 10;
        }
        if (even == odd) {
            return true;
        } else {
            return false;
        }
    }
}
int digits(int n) {
    int res = 0;
    while (n > 0) {
        n /= 10;
        res++;
    }
    return res;
}