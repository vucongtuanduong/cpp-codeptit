#include <bits/stdc++.h>
using namespace std;
void testCase();
//cu the
void testCase() {
	int n, p;
	cin >> n >> p;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		int x = i;
		while (x % p == 0) {
			count++;
			x /= p;
		}
	}
	cout << count;
}
int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while (t--) {
		testCase();
		cout << endl;
	}
}