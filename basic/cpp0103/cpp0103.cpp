#include <iostream>
#include <iomanip>
using namespace std;
void testCase();
int main () {
	testCase();
}
void testCase() {
	int n;
    cin >> n;
    double res = 0;
    for (int i = 1; i <= n; i++) {
        res += 1.0 / i;
    }
    cout << fixed << setprecision(4) << res;
}