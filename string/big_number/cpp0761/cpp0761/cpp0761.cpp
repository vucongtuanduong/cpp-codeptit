#include <iostream>
using namespace std;
void testCase();
long long gcd(long long a, long long b);
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
void testCase() {
    long long a, temp = 0;
    string b;
    cin >> a >> b;
    for (int i  = 0; i < b.size(); i++) {
        temp = (temp * 10 + (b[i] - '0')) % a;
    }
    long long res = 1;
    res = gcd(a, temp);
    cout << res;

}
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}