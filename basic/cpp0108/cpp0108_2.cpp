#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int isPrime(int n);
int isIncreasing(int n);
int isDecreasing(int n);


void testCase() {
    int n;
    cin >> n;
    int left = pow(10, n - 1);
    int right = pow(10, n) - 1;
    int count = 0;
    for (int i = left; i <= right; i++) {
        // cout << "isIncreasing(" << i << ") = " << isIncreasing(i) << endl;
        // cout << "isDecreasing(" << i << ") = " << isDecreasing(i) << endl;
        if (isIncreasing(i) || isDecreasing(i)) {
            if (isPrime(i)) {
                count++;
            }
        }
    }
    cout << count;
}
int isPrime(int n ) {
    if (n < 2) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
int isIncreasing(int n) {
    int x = n;
    int donvi = n % 10;
    n /= 10;
    while (n > 0) {
        int temp = n % 10;
        if (temp >= donvi) {
            return 0;
        }
        donvi = temp;
        n /= 10;
    }
    return 1;
}
int isDecreasing(int n) {
    int x = n;
    int donvi = n % 10;
    n /= 10;
    while (n > 0) {
        int temp = n % 10;
        if (temp <= donvi) {
            return 0;
        }
        donvi = temp;
        n /= 10;
    }
    return 1;
}
int main ( ){
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