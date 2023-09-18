#include <iostream>
#include <cmath>
using namespace std;
void testCase();
long long gcd(long long a, long long b);
void testCase2();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase2();
        cout << endl;
    }
}
void testCase() {
    long long a, x, y;
    cin >> a >> x >> y;
    
    string p,q;
    for (int i = 0; i < x; i++) {
        p += to_string(a);
    }
    for (int i = 0; i < y; i++) {
        q += to_string(a);
    }
    // cout << p << endl;
    // cout << q << endl;
    long long llP = stoll(p);
    long long llQ = stoll(q);
    // cout << llP << endl;
    // cout << llQ << endl;
    cout << gcd(llP, llQ);
}
long long gcd(long long a, long long b) {
    while (b!= 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void testCase2() {
    long long a, x, y;
    cin >> a >> x >> y;
    long long res = gcd(x, y);
    for (int i = 0; i < res; i++) {
        cout << a;
    }
}