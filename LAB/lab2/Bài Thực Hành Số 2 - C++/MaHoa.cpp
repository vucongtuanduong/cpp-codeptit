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
	string s;
	getline(cin, s);

	string res = "";

	FOR(i, 0, s.length() - 1) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] + 2 > 'z') {
				if (s[i] == 'y') res += 'a';
				if (s[i] == 'z') res += 'b';
			}
			else res += char(s[i] + 2);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			if (s[i] - 2 < 'A') {
				if (s[i] == 'B') res += 'Z';
				if (s[i] == 'A') res += 'Y';
			}
			else res += char(s[i] - 2);
		}
		else res += s[i];
	}

	cout << res << endl;

	return 0;
}