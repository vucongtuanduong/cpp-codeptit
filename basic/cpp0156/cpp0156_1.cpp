#include <iostream>
using namespace std;
void testCase();
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
    long long b, p;
    cin >> b >> p;
    long long res = 0;
    for (long long i = 1; i < p; i++) {
        if ((i * i) % p == 1) {
            long long last = i + p * (b / p);
            if (last > b) {
                last -= p;
            }
            res += (last - i) / p + 1;
        }
    }
    cout << res;
}