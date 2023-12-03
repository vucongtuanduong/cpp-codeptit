#include <bits/stdc++.h>
using namespace std;
void toupper(char &c);
void tolower(char &c);
string standardise(string s);
class SinhVien{
	public:
		string id = "B20DCCN001";
		string name;
		string dob;
		double gpa;
		string className;
		friend istream &operator >> (istream &in, SinhVien &a) {
			string ten;
			string lop;
			string ngaysinh;
			getline(in, ten);
			getline(in, a.className);
			getline(in, ngaysinh);
			if (ngaysinh[2] != '/') {
				ngaysinh.insert(0, "0");
			}
			if (ngaysinh[5] != '/') {
				ngaysinh.insert(3, "0");
			}
			a.dob = ngaysinh;
			a.name = standardise(ten);
			in >> a.gpa;
//			scanf("\n");//hai cai deu duoc
			in.ignore();
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien a) {
			out << a.id << " " << a.name  << " " << a.className << " " << a.dob << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
};

//cu the
void toupper(char &c) {
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}
}
void tolower(char &c) {
	if (c >= 'A' && c <= 'Z') {
		c += 32;
	}
}
string standardise(string s) {
	string temp;
	stringstream ss(s);
	string res = "";
	while (ss >> temp) {
		toupper(temp[0]);
		for (int i = 1; i < temp.size(); i++) {
			tolower(temp[i]);
		}
		res = res + temp + " ";
	}
	res.pop_back();
	return res;
}
int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	SinhVien a;
    cin >> a;
    cout << a;
}