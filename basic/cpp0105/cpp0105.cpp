#include <iostream>

using namespace std;
void testCase();
bool check(long long n);
int main () {
	int t;
	cin >> t;
	while (t--) {
		testCase();
		cout << endl;
	}
}
void testCase() {
	long long n;
    cin >> n;
    if (check(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
bool check(long long n) {
    int digit = 0;
    while (n > 0) {
        digit = n % 10;
        if (digit != 0 && digit != 6 && digit != 8) {
            return false;
        }
        n /= 10;
    }
    return true;
}