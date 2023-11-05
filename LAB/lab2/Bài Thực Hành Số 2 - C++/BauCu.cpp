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
	int n, m;
	cin >> n >> m;

	int arr[N];

	map<int, int> mp;

	int maxVal = 0;

	FOR(i, 0, n - 1) {
		cin >> arr[i];
		mp[arr[i]]++;
		maxVal = max(maxVal, mp[arr[i]]);
	}

	int secondVal = 0;
	int ans = 0;

	FOR(i, 0, n - 1) {
		if (mp[arr[i]] != maxVal) {
			if (mp[arr[i]] > secondVal) {
				secondVal = mp[arr[i]];
				ans = arr[i];
			}
		}
	}

	if (ans != 0) {
		cout << ans << endl;
	}
	else cout << "NONE\n";

	return 0;
}