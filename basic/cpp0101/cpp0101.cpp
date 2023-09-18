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
	long long n;
	cin >> n;
	long long res = n * (n + 1) / 2;
	cout << res;
}