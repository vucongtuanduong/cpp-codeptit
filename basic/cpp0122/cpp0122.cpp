#include <iostream>

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
    int n;
    cin >> n;
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res = lcm(res, i);
    }
    cout << res;
}

long long gcd(long long a, long long b) {
    while (b!= 0) {
        long long r = a % b;
        a = b;
        b = r;

    }
    return a;
}
long long lcm(long long a, long long b){
    long long result = (long long)a * b / gcd(a, b);
    return result;
}