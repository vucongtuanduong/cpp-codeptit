#include <bits/stdc++.h>
using namespace std;
void testCase();

//cu the

void testCase() {
	int n, k;
	cin >> n >> k;
	long long a[n];
	int min = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long max = INT_MIN;
	int index = -1;
	for (int i = 0; i < n - k + 1; i++) {
		int sum = 0;
		for (int j = i; j < i + k; j++) {
			sum += a[j];	
		}
		if (sum > max) {
			max = sum;
			index = i;
		}
	}
	for (int i = index; i < index + k; i++) {
		cout << a[i] << " ";
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