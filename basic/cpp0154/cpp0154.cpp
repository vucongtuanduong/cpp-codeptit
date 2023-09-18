#include <iostream>
using namespace std;
void testCase();
void testCase2();//optimal way
int main () {
    int t;
    cin >> t;
    while(t--) {
        testCase();
        cout << endl;
    }

}
void testCase() {
    int n;
    long long k;
    cin >> n >> k;
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        long long temp = i % k;
        res += temp;
    }
    if (res == k) {
        cout << "1";
    } else {
        cout << "0";
    }
}
void testCase2() {
    long long n, k;
    cin >> n >> k;
    long long res = (double)k * (k - 1) / 2 * (n / k) + ((n % k) * (n % k + 1) / 2);
    if (res == k) {
        cout << "1";
    } else {
        cout << "0";
    }
}