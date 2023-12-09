#include <bits/stdc++.h>
using namespace std;
void testCase( ){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	int max = INT_MIN;
	int index = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	a.insert(a.begin() + index, m);
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < 0) {
			cout << a[i] << " ";
		}
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 0) {
			cout << a[i] << " ";
		}
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
}