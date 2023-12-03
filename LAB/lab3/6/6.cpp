#include <bits/stdc++.h>
using namespace std;
int x[100];
int n;
void testCase();
void init();
bool isFinal();
void display();
void genNext();
//cu the
void genNext() {
	int t = n;
	while (x[t] == 1) {
		t--;
	}
	x[t] = 1;
	for (int i = t + 1; i <= n; i++) {
		x[i] = 0;
	}
}
bool isFinal() {
	for (int i = 1; i <= n; i++) {
		if (x[i] == 0) {
			return false;
		}
	}
	return true;
}
void init() {
	for (int i = 1; i <= n; i++) {
		x[i] = 0;
	}
}
void display() {
	for (int i = 1; i <= n; i++) {
		cout << x[i];
	}
	cout << " ";
}
void testCase() {
	cin >> n;
	init();
	while (!isFinal()) {
		display();
		genNext();
	}
	display();
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