#include <iostream>

using namespace std;
void testCase();
int gcd(int a, int b);
long long lcm(int a, int b);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << " " << gcd(a, b);
}
int gcd(int a, int b) {
    while (b!= 0) {
        int r = a % b;
        a = b;
        b = r;

    }
    return a;
}
long long lcm(int a, int b) {
    long long result = (long long)a * b / gcd(a, b);
    return result;
}