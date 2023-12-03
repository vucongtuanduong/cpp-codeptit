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
//#define M 100 + 5
//#define N 500 + 5
#define MOD (long long)1000000007
#define ll long long
#define ld long double
#define sz size()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)

int arr[20][10][20]; // tuan - thu - tiet

bool check(int day, string lesson, string school_week) {
	for (int i = 0; i < school_week.length(); i++) {
		if (school_week[i] == '-') continue;
		int week = i + 1;
		for (int j = 0; j < lesson.length(); j++) {
			if (lesson[j] == '-') continue;
			int l = j + 1;
			arr[week][day][l]++;
			if (arr[week][day][l] > 1) {
				return false;
			}
		}
	}

	return true;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;

	while (t--) {
		int day_study;
		cin >> day_study;

		memset(arr, 0, sizeof arr);
		bool result = true;

		while (day_study--) {
			int day;
			string lesson;
			string school_week;

			cin >> day;
			cin.ignore();
			getline(cin, lesson);
			getline(cin, school_week);

			if (result == true)
				if (!check(day, lesson, school_week)) {
					result = false;
				}
		}

		if (result) cout << "NO\n";
		else cout << "YES\n";

	}

	return 0;
}