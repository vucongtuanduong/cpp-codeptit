#include <bits/stdc++.h>
using namespace std;
class TheLoai;
class Phim;
map<string, TheLoai> theloaiMap;
int demTl = 1, demPhim = 1;
class TheLoai{
	public:
		string theloaiId = "TL";
		string theloaiName;
		friend istream &operator >> (istream &in, TheLoai &a) {
			string temp = to_string(demTl);
			while (temp.size() != 3) {
				temp = "0" + temp;
			}
			a.theloaiId += temp;
			demTl++;
			
			getline(in, a.theloaiName);
			theloaiMap[a.theloaiId] = a;
			return in;
		}
};
class Phim{
	public:
		string phimId = "P";
		string phimName;
		string day;
		int episodes;
		string theloai;
		string ngayChieu;
		string thangChieu;
		string namChieu;
		friend istream &operator >> (istream &in, Phim &a) {
			string temp = to_string(demPhim);
			while (temp.size() != 3) {
				temp = "0"  + temp;
			}
			demPhim++;
			a.phimId += temp;
			
			string tl ;
			getline(in, tl);
			a.theloai = theloaiMap[tl].theloaiName;
			getline(in, a.day);
			getline(in, a.phimName);
			in >> a.episodes;
			in.ignore();
			a.ngayChieu = a.day.substr(0, 2);
			a.thangChieu = a.day.substr(3, 2);
			a.namChieu = a.day.substr(6, 4);
			return in;
		}
		friend ostream &operator << (ostream &out, Phim a) {
			out << a.phimId << " " << a.theloai << " " << a.day << " " << a.phimName << " " << a.episodes << endl;
			return out;
		}
};
void testCase();
bool cmp(Phim a, Phim b);
//explicit
bool cmp(Phim a, Phim b) {
	if (a.namChieu == b.namChieu) {
		if (a.thangChieu == b.thangChieu) {
			if (a.ngayChieu == b.ngayChieu) {
				if (a.phimName == b.phimName) {
					return a.episodes > b.episodes;
				}
				return a.phimName < b.phimName;
			}
			return a.ngayChieu < b.ngayChieu;
		}
		return a.thangChieu < b.thangChieu;
	}
	return a.namChieu < b.namChieu;
}
void testCase() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai *dstl  = new TheLoai[n];
	Phim *dsphim = new Phim[m];
	for (int i = 0; i < n; i++) {
		cin >> dstl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> dsphim[i];
	}
	sort(dsphim, dsphim + m, cmp);
	for (int i = 0; i < m; i++) {
		cout << dsphim[i];
	}
}
int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	testCase();
}