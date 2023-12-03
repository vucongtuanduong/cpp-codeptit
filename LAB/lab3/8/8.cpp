#include <bits/stdc++.h>
using namespace std;
class NgayHoc;
class SinhVien;
class NgayHoc{
	public:
		int day;
		vector<int> week;
		vector<int> tiet;
		map<int, map<int,map<int,int>>> tkb;
};
class SinhVien{
	public:
		vector<NgayHoc> ngaydihoc;
};
void testCase();

//cu the

void testCase() {
	SinhVien a;
	int sobuoihoc;
	cin >> sobuoihoc;
	vector<int> vectorTiet;
	vector<int> vectorTuan;
	while (sobuoihoc--) {
		NgayHoc x;
		int ngay;
		string tiethoc;
		string tuanhoc;
		cin >> ngay;
		cin >> tiethoc;
		cin >> tuanhoc;
		x.day = ngay;
		
		for (int i = 0; i < tuanhoc.size(); i++) {
			if (tuanhoc[i] == '-') {
				continue;
			}
			vectorTuan.push_back(i + 1);
		}
		for (int i = 0; i < tiethoc.size(); i++) {
			if (tiethoc[i] == '-') {
				continue;
			} 
			vectorTiet.push_back(i + 1);
		}
//		for (auto x : vectorTuan) {
//			cout << x << " ";
//		}
//		cout << endl;
//		for (auto x : vectorTiet) {
//			cout << x << " ";
//		}
//		cout << endl;
		map<int,vector<int>> mapTuan;
		for (int i = 0; i < vectorTuan.size(); i++) {
			mapTuan[i] = vectorTiet;
		}
		
//		for (auto x : mapTuan) {
//			cout << x.first << " ";
//		}
//		cout << endl;
	}

}
int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while (t--) {
		testCase();
		cout << endl;
	}
}