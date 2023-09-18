#include <iostream>
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
    int a, m;
    cin >> a >> m;
    int res = 0;
    for (int i = 0; i < m; i++) {
        res = a * i;
        if (res % m == 1) {
            cout << i;
            return;
        }
    }
    cout << "-1";
}
