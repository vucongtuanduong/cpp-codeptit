#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define MAX 1000000000 + 5
#define M 100 + 5
#define N 500 + 5
#define MOD (long long)1000000007
#define ll long long
#define ld long double
#define sz size()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)

void chuanhoa(string& s) {
	stringstream ss(s);
	string t;

	string res = "";

	while (ss >> t) {
		for (int i = 0; i < t.length(); i++) {
			t[i] = tolower(t[i]);
		}
		res = res + t + " ";
	}

	res[0] = toupper(res[0]);
	res.pop_back();

	s = res;
}

int main() {
	string s;

	vector<string> v;

	while (getline(cin, s)) {
		//if (s == "END") break;
		string tmp = "";
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
				chuanhoa(tmp);
				tmp = tmp + s[i];
				v.push_back(tmp);
				tmp = "";
			}
			else tmp += s[i];
		}

		if (tmp != "") {
			chuanhoa(tmp);
			v.push_back(tmp + ".");
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}