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

	

	while (t--) {
		cin.ignore();
		string a;
		getline(cin, a);
		int n;
		cin >> n;

		ll sum = 0;

		FOR(i, 1, n) {
			ll chitieu;
			cin >> chitieu;
			if (chitieu < 0) sum += abs(chitieu);
		}

		if (sum >= 100000000) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}