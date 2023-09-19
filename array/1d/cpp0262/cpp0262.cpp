#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    long long n,m;
    cin >> n >> m;
    long long sum = n * (n + 1) / 2;
    long long a = (sum + m) / 2;
    long long b = sum - a;
    if (a - b == m && __gcd(a, b) == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}