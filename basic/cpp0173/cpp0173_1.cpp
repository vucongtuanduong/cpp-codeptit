#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void testCase();
long long gcd(long long x, long long  y);
long long lcm(long long x, long long y);
int main () {
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
void testCase(){
    long long x,y,z, n;
    // long long n;
    cin >> x >> y >> z >> n;
    long long temp = lcm(lcm(x, y), z);
    // cout << temp << endl;
    long long left = pow(10, n - 1);
    long long right = pow(10, n) - 1;
    if (temp > right) {
        cout << "-1";
        return;
    }
    if (left % temp == 0) {
        cout << left ;
        return;
    } else {
        long long l = (long long)left / temp;
        l++;
        long long res = (l) *temp;
        cout << res;
        return;
    }

}
long long lcm(long long x, long long y) {
    return x * y / gcd(x, y);
}
long long gcd(long long  x, long long y) {
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }
    return x;
}