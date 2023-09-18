#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
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
    int n;
    cin >> n;
    int res = n % 100;
    if (res == 86) {
        cout << "1";
    } else {
        cout << "0";
    }
}
