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

map<string, string> mp;
int cnt = 0;

class MonHoc {
public:
	string m;
	string name;
public:
	friend istream& operator >> (istream& i, MonHoc& m) {
		string a;
		string b;
		getline(cin, a);
		getline(cin, b);
		m.m = a;
		m.name = b;
		mp[a] = b;
		return i;
	}
};

struct LichThi {
public:
	int stt;
	string ma;
	string ngay;
	string gio;
	int nhom;
	int y, m, d;
	int h, p;
public:
	friend istream& operator >> (istream& i, LichThi& lt) {
		cnt++;
		lt.stt = cnt;
		i >> lt.ma >> lt.ngay >> lt.gio >> lt.nhom;
		return i;
	}

	friend ostream& operator <<(ostream& o, LichThi& lt) {
		cout << "T" << zero(3) << lt.stt << " " << lt.ma << " " << mp[lt.ma] << " "
			<< lt.ngay << " " << lt.gio << " " << zero(2) << lt.nhom << endl;
		return o;
	}
};

void pd(LichThi& a) {
	a.d = a.ngay[0] * 10 + a.ngay[1];
	a.m = a.ngay[3] * 10 + a.ngay[4];
	a.y = a.ngay[6] * 1000 + a.ngay[7] * 100 + a.ngay[8] * 10 + a.ngay[9];

	a.h = a.gio[0] * 10 + a.gio[1];
	a.p = a.gio[3] * 10 + a.gio[4];
}

int cmp1(LichThi& a, LichThi& b) {
	if (a.y == b.y) {
		if (a.m == b.m) {
			if (a.d == b.d) {
				return 10;
			}
			else return a.d < b.d;
		}
		else return a.m < b.m;
	}
	else return a.y < b.y;
}

int cmp2(LichThi& a, LichThi& b) {
	if (a.h == b.h) {
		if (a.p == b.p) {
			return 10;
		}
		else return a.p < b.p;
	}
	else return a.h < b.h;
}

bool cmp(LichThi& a, LichThi& b) {

	stringstream ss(a.ngay);
	string tmp = "";

	pd(a);
	pd(b);

	if (cmp1(a, b) == 10) {
		if (cmp2(a, b) == 10) {
			return a.ma < b.ma;
		}
		else return cmp2(a, b);
	}
	else return cmp1(a, b);
}

void process(MonHoc mh[], int n, LichThi lt[], int m) {
	sort(lt, lt + m, cmp);
}


int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}