#include <bits/stdc++.h>
using namespace std;
class MucLuc;
class MucLuc{
	public:
		string page;
		string level;
		string topic;
		string numLevel;
};
void testCase();
bool cmp(MucLuc a, MucLuc b);
//cu the
bool cmp(MucLuc a, MucLuc b) {
	if (a.page == b.page) {
		return a.level < b.level;
	}
	return a.page < b.page;
}

int main () {

//	fstream file("VANBAN.txt");//wa
//	fstream fileOut("MUCLUC.txt");//wa
	fstream file("VANBAN.txt",ios::in);//wa
	fstream fileOut("MUCLUC.txt", ios::out);//wa
//	fstream fileOut;
	
//	freopen("VANBAN.txt", "r", stdin);
//	freopen("MUCLUC.txt", "w", stdout);
	vector<string> v;
	string s;
	while (getline(file, s)) {
		v.push_back(s);
	}
//	for (auto x : v) {
//		cout << x << endl;
//	}
	string sttTrang;
	string soLevel;
	string chude;
	int i = 0;
	vector<MucLuc> res;
	while (i < v.size()) {
		if (v[i].find("Page") != -1) {
			int size = v[i].size();
			sttTrang = v[i][size - 1];
		} else if (v[i].find("Level") != -1){
			stringstream ss(v[i]);
			vector<string> noidung;
			string temp;
			while (getline(ss, temp, ':')) {
				noidung.push_back(temp);
			}
			int size1 = noidung[0].size();
			soLevel = noidung[0][size1 - 1];
			chude = noidung[1].erase(0, 1);
			MucLuc a;
			a.page = sttTrang;
			a.numLevel = soLevel;
			if (soLevel == "1") {
				a.level = ">";
			} else if (soLevel == "2") {
				a.level = ">>";
			} else if(soLevel == "3") {
				a.level = ">>>";
			}
//			cout << temp1 << endl;
			a.topic = chude;
			res.push_back(a);
		}
		i++;
	}
//	sort(res.begin(), res.end(), cmp);
	for (auto x : res) {
		fileOut << x.level << x.topic << "--- " << x.page << endl;
	}
}