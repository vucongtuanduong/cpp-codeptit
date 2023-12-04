#include <bits/stdc++.h>
using namespace std;
void testCase();
void toupper(char &c);
void tolower(string &s);
//cu the
void toupper(char &c) {
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}
}
void tolower(char &s) {
	
		if (s >= 'A' && s <= 'Z') {
			s += 32;
		}
	
}
void testCase() {
	
	string s;
	string input = "";
	while (getline(cin, s)) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '?' || s[i] == '!') {
				s[i] = '.';
			}
		}
		input += s + " ";
	}
	vector<string> v;
	stringstream ss(input);
	string temp;
	while (getline(ss, temp, '.')) {
		v.push_back(temp);
	}
	vector<string> res;
	for (int i = 0; i < v.size(); i++) {
		string temp1;
		string res1 = "";
		stringstream ss1(v[i]);
		while (ss1 >> temp1) {
			for (int i = 0; i < temp1.size(); i++) {
				tolower(temp1[i]);
			}
			
			res1 += temp1 + " ";
		}
		if (res1 != "") {
			res1.pop_back();
			res.push_back(res1);
		}
		
	}
	for (int i = 0; i < res.size(); i++) {
		if (res[i] != "") {
			toupper(res[i][0]);
			cout << res[i] << endl;
		}
	}
}
int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
//	int t;
//	cin >> t;
//	while (t--) {
//		testCase();
//		cout << endl;
//	}
	testCase();
}