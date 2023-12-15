#include <bits/stdc++.h>
using namespace std;
long long lcm(long long x, long long y) {
    return x * y / __gcd(x, y);
}

void testCase() {
    long long x,y,z,n;
    cin >> x >> y >> z >> n;
    long long res = lcm(lcm(x, y), z);
    long long left = pow(10, n - 1);
    long long right = pow(10, n);
    long long l = left / res;
    long long res1 = l * res;
    if (res1 < left) {
        res1 = (l + 1) * res;
    }
    if (res1 > right) {
        cout << "-1";
    } else {
        cout << res1;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}