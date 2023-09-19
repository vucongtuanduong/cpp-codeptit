#include<iostream>
using namespace std;
void testCase();
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	testCase();
}
void testCase() {
	int n;
	cin >> n;
	int a[n][n];
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x= 0, y = 0, k = 0;
			//main diagonal and secondary diagonal
			while (k <= i && k <= j && i + k < n && j + k < n) {
				x += a[i - k][j - k] + a[i + k][j + k];
				y += a[i - k][j + k] + a[i + k][j - k];
				res = max(res, x - y);
				++k;
			}
			x = 0;
			y = 0;
			k = 0;
			while (k <= i && k <= j && i + k + 1 < n && j + k + 1 < n) {
				x += a[i - k][j - k] + a[i + k + 1][j + k + 1];
				y += a[i - k][j + k + 1] + a[i + k + 1][j - k];
				res = max(res, x - y);
				++k;
			}
		}
	}
	cout << res;
}