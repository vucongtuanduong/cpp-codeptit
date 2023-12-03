#include <bits/stdc++.h>
using namespace std;

void testCase();

//cu the

void testCase() {
	int sum = 0;//tinh sum ben phai
	int sumCheck = 0;// tinh sum ben trai
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < n ;i++) {
		sum -= a[i];
		if (i != 0) {
			sumCheck += a[i - 1];
		} 
		if (sumCheck == sum) {
			cout << i + 1;
			return;
		}
	}
	cout << "-1";
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