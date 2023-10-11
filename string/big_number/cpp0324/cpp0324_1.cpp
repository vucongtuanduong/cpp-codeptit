#include <iostream>
using namespace std;
void testCase();
long long mod(string a, long long m);
long long powll(long long x, long long b, long long m);
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
void testCase() {
    string a;
    long long b,m;
    cin >> a >> b >> m;
    long long x = mod(a, m);
    long long res = powll(x, b, m);
    cout << res;
}
long long mod(string a, long long m) {
    long long res = 0;
    for (int i = 0; i < a.size(); i++) {
        int temp = a[i] - '0';
        temp %= m;
        res = (res * 10 + temp) % m;
    }
    return res;
}
long long powll(long long x, long long b, long long m) {
    if (b == 0) {
        return 1;
    } else if (b == 1) {
        return x;
    }
    long long temp = powll(x, b / 2, m);
    if (b % 2 == 0)  {
        return (temp * temp) % m;
    } else {
        return (((temp * temp) % m) * (x % m) % m);
    }
}