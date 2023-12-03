#include <bits/stdc++.h>
using namespace std;
int x[1000];
int n;
void testCase();

//cu the

void testCase() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}

	prev_permutation(x, x + n);
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}

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
//	testCase();
}