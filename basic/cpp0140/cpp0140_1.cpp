#include <iostream>
#include <cmath>
using namespace std;
void testCase();
long long sumDivisor(long long n);
int check(long long n);
int main (){ 
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
    if (n > 1e12) {
        cout << "0";
        return;
    } else {
        cout << check(n);
    }
}
long long sumDivisor(long long n) {
    long long sum = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += (n / i);
            }
        }
    }
    return sum;
}
int check(long long n) {
    return (n == sumDivisor(n));
}