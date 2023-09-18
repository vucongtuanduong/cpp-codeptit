#include <iostream>
using namespace std;
void testCase();
int iterativeBinarySearch(int *a, int l, int r, int x);
int recursiveBinarySearch(int *a, int l, int r, int x);
int main () {
	int t;
	cin >> t;
	while (t--) {
		testCase();
		cout << endl;
	}
}
void testCase() {
	int n, x;
	cin >> n >> x;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int res = iterativeBinarySearch(a, 0, n - 1, x);
	cout << res;
}
int iterativeBinarySearch(int *a, int l, int r, int x) {
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (a[m] == x) {
			return 1;//return m;
		} else if (a[m] < x) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	return -1;//not found
}
int recursiveBinarySearch(int *a, int l, int r, int x) {
	if (r >= l) {
		int m = l + (r - l) / 2;
		if (a[m] == x) {
			return 1;//return m;
		} else if (a[m] < x) {
			return recursiveBinarySearch(a, m + 1, r ,x);
		} else {
			return recursiveBinarySearch(a, l, m - 1, x);
		}
	}
	return -1;
}
