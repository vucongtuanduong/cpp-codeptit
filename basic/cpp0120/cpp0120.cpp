#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void testCase();


int main () {
    int t;
    cin >> t;

    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    int count = 0;
    for (int i = m; i <= n; i++) {
        if (i % a == 0 || i % b == 0) {
            count++;
        }
    }
    cout << count;
}
