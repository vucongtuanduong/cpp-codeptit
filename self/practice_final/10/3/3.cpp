#include <bits/stdc++.h>
using namespace std;
void testCase();

//cu the

void testCase() {
	int n;
	cin >> n;
	long long a[n];
	int min = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (min < a[i]) {
			min = a[i];
		}
	}
	if (min <= 0) {
		cout << min;
		return;
	}
	long long sum = 0;
	long long max = INT_MIN;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum > max) {
			max = sum;
		}
		if (sum < 0) {
			sum = 0;
		}
		
	}
	cout << max;
	
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