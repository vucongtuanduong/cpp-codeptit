#include <iostream>
using namespace std;
void testCase();
string bigMul(char a, string b);
string bigSum(string a, string b);
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
void testCase() {
	string x, y;
	cin >> x >> y;
	int n = x.size();
	string res = "";
	for (int i = n - 1; i >= 0; i--) {
		string temp = bigMul(x[i], y);
		temp.insert(temp.size(), n - i - 1, '0');
		res = bigSum(res, temp);
	} 
	cout << res;
}
string bigMul(char a, string b) {
	string res = "";
	int carry = 0;
	for (int i = b.size() - 1; i >= 0; i--) {
		int temp = (b[i] - '0') * (a - '0') + carry;
		carry = temp / 10;
		temp %= 10;
		res.insert(0, 1, temp + '0');
		
	}
	if (carry) {
		res.insert(0, 1, carry + '0');
	}
	return res;
}
string bigSum(string a, string b) {
	if (a.size() < b.size()) {
		a.insert(0, b.size() - a.size(), '0');
	}
	if (b.size() < a.size()) {
		b.insert(0, a.size() - b.size(), '0');
	}
	string res = a;
	int carry = 0;
	for (int i = a.size() - 1; i >= 0; i--) {
		int temp = a[i] - '0' + b[i] - '0' + carry;
		carry = temp / 10;
		temp %= 10;
		res[i] = temp + '0';
	}
	if (carry > 0) {
		res.insert(0, 1, carry + '0');
	}
	return res;
}