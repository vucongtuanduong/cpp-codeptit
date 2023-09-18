#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int count(int n, int p);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n, p;
    cin >> n >> p;
    cout << count(n, p);
}
int count(int n, int p) {
    int res = 0;
    for (int i = 2; i <= n; i++) {
        int x = i;
        while(x % p == 0) {
            res ++;
            x /= p;
        }
    }
    return res;
}