#include <bits/stdc++.h>
using namespace std;
void testCase();
//cu the
void testCase() {
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count != 0) {
            cout << i << " " << count << endl;
        }
    }
    if (n > 1) {
        cout << n << " 1\n";
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}