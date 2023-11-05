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
	int ma;
	string ten;
	double diem;
	string dantoc;
	int khuvuc;
	string ketqua;
};

bool cmp(ThiSinh& a, ThiSinh& b) {
	if (a.diem == b.diem) {
		return a.ma < b.ma;
	}
	else return a.diem > b.diem;
}

string chuanhoa(string s) {
	stringstream ss(s);
	string t;

	string ten = "";
	while (ss >> t) {
		FOR(i, 0, t.length() - 1) {
			t[i] = tolower(t[i]);
		}
		t[0] = toupper(t[0]);
		ten = ten + t + " ";
	}
	ten.pop_back();
	return ten;
}

int main() {
	int t;
	cin >> t;

	struct ThiSinh ds[100];

	FOR(i, 0, t - 1) {
		ds[i].ma = i + 1;
		cin.ignore();
		getline(cin, ds[i].ten);
		ds[i].ten = chuanhoa(ds[i].ten);
		cin >> ds[i].diem;
		cin.ignore();
		getline(cin, ds[i].dantoc);
		cin >> ds[i].khuvuc;

		if (ds[i].khuvuc == 1) ds[i].diem += 1.5;
		if (ds[i].khuvuc == 2) ds[i].diem += 1.0;
		if (ds[i].dantoc != "Kinh") ds[i].diem += 1.5;

		if (ds[i].diem >= 20.5) ds[i].ketqua = "Do";
		else ds[i].ketqua = "Truot";
	}

	sort(ds, ds + t, cmp);

	FOR(i, 0, t - 1) {
		cout << "TS" << zero(2) << ds[i].ma << " "
			<< ds[i].ten << " " << stp(1) << ds[i].diem << " " << ds[i].ketqua << endl;
	}

	return 0;
}