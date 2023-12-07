#include <bits/stdc++.h>
using namespace std;
long long powll(long long x, long long y, long long p) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    }
    long long res = powll(x, y / 2, p);
    
    if (y % 2 == 0) {
        res = (res * res) % p ;
        res %= p;
    } else {
        res = x * ((res * res) % p );
        res %= p;
    }
    return res;
}
void testCase() {
    long long  x, y, p;
    cin >> x >> y >> p;
    cout << powll(x,y,p);
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