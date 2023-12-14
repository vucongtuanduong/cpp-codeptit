#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            count++;
            if (count == k) {
                cout << i;
                return;
            }
            n /= i;

        }
    }
    if (n > 1) {
        count++;
        if(count == k) {
            cout << n;
            return;
        }
    }
    cout << "-1";
}
int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    testCase();
}