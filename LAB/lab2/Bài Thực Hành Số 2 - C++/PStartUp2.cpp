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

struct ThiSinh {
	int id, share, tuongtac;
	double diem;
};

bool cmp(ThiSinh& a, ThiSinh& b) {
	if (a.diem == b.diem) {
		return a.id < b.id;
	}
	return a.diem > b.diem;
}

int main() {
	int t;
	cin >> t;

	struct ThiSinh ds[100];

	FOR(i, 0, t - 1) {
		cin >> ds[i].id >> ds[i].share >> ds[i].tuongtac;
		ds[i].diem = 0.7 * ds[i].share + 0.3 * ds[i].tuongtac;
	}

	sort(ds, ds + t, cmp);

	vector<int> kq;

	FOR(i, 0, 6) kq.push_back(ds[i].id);

	sort(kq.begin(), kq.end());

	for (auto x : kq) {
		cout << x << " ";
	}

	return 0;
}