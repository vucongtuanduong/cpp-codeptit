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
		string ip;
		getline(cin, ip);

		stringstream ss(ip);
		string s;
		int cnt = 0;
		bool check = true;

		while (getline(ss, s, '.')) {
			cnt++;
			ll num = 0;
			for (char c : s) {
				if (!isdigit(c)) check = false;
				else num = num * 10 + c - '0';
			}
			if (num < 0 || num > 255) check = false;
			if (check == false) break;
		}

		if (!check || cnt != 4) cout << "NO\n";
		else cout << "YES\n";

	}

	return 0;
}