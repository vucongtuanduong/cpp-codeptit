#include <bits/stdc++.h>
using namespace std;
void testCase();
long long lcm(long long a, long long b);
//explicit
long long lcm(long long a, long long b) {
    long long res = a * b;
    return res / __gcd(a, b);
}
void testCase() {
    int x,y,z,n;
    cin >> x >> y >> z >> n;
    long long lcmxy = lcm(x, y);
    long long lcm3 = lcm(lcmxy, z);
    long long left = pow(10, n - 1);
    long long right = pow(10, n) - 1;
    // cout << "left: " << left << endl;
    long long a = left / lcm3;
    long long l = a * lcm3;
    if (l < left) {
        l = (a + 1) * lcm3;
        
    } 
    if (l > right) {
        cout << "-1";
    } else {
        cout << l;
    }
    
}
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