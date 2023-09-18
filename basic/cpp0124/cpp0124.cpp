#include <iostream>
#include <cmath>
using namespace std;
void testCase();
void pt(int n);
int main () {
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    pt(n);
}
void pt(int n) {
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
    if (n != 1) {
        cout << n << " 1" << endl;
    }
}