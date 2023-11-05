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

int main() {
	int t;
	cin >> t;

	cin.ignore();

	while (t--) {
		string s;
		getline(cin, s);

		if (s.length() < 100) {
			cout << s << endl;
			continue;
		}

		s += " ";
		int i = 0;
		int cnt = 0;
		int count = 0;
		string s1 = "";
		while (i < 100) {
			s1 += s[i];
			i++;
		}

		if (s[99] != ' ' && s[100] != ' ') {
			int j = 99;
			while (s1[j] != ' ') s1.pop_back(), j--;
		}

		cout << s1 << endl;
	}

	return 0;
}