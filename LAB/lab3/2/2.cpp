#include <bits/stdc++.h>
using namespace std;
class NhanVien;

class NhanVien{
	public:
		string nvId = "NV01";
		string nvName;
		int basicSal = 0;
		int workDays = 0;
		string role;
		int reward = 0;
		int stipend = 0;
		int totalSal = 0;
		friend istream &operator >> (istream &in, NhanVien &a) {
			getline(in, a.nvName);
			in >> a.basicSal >> a.workDays;
			in.ignore();
			getline(in, a.role);
			if (a.role == "GD") {
				a.stipend = 250000;
			} else if (a.role == "PGD") {
				a.stipend = 200000;
			} else if (a.role == "TP") {
				a.stipend = 180000;
			} else if (a.role == "NV") {
				a.stipend = 150000;
			}
			if (a.workDays >= 25) {
				a.reward = 0.2 * a.basicSal * a.workDays;
			} else if (a.workDays >= 22) {
				a.reward = 0.1 * a.basicSal * a.workDays;
			}
			a.totalSal = a.basicSal * a.workDays + a.stipend + a.reward;
			return in;
		}
		friend ostream &operator << (ostream &out, NhanVien a) {
			out << a.nvId << " " << a.nvName << " " << a.basicSal * a.workDays << " " << a.reward << " " << a.stipend << " " << a.totalSal << endl;
			return out;
		}
};
void testCase();
//explicit
void testCase() {
	NhanVien a;
	cin >> a;
	cout << a;
}
int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	testCase();
}