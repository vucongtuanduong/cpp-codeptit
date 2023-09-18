#include <iostream>
#include <cmath>
using namespace std;
void testCase();
long long gcd(long long a, long long b);
long long lcm(long long a, long long b);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    long long x, y,z,n;
    cin >> x >> y >> z >> n;
    long long temp = lcm(x, lcm(y, z));
    long long left = pow(10, n - 1);
    long long right = pow(10, n) - 1;
    long long l = (long long)left / temp;
    long long r = (long long)right / temp;
    long long res = 0;
    if (temp > right) {
        cout << "-1";
        return;
    }
    if (left % temp == 0) {
        res = left;
    } else {
        res = (l + 1) * temp;
    }
    // cout << endl;
    // cout << temp << " " << left << " " << right << endl;
    
    // cout << l << " " << r;
    // cout << endl;
    cout << res;
}
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}