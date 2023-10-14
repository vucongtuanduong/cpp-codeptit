#include <bits/stdc++.h>
using namespace std;
int dem =1;
map<string, string> db;
struct MonHoc;
struct LichThi;
struct MonHoc{
    string id;
    string course;
};
vector<LichThi> res;
struct LichThi{
    string stt;
    string id;
    string name;
    string day;
    string hour;
    string group;
    string sosanhngay;
};
istream & operator >> (istream &in, MonHoc &mh) {
    in >> mh.id;
    in.ignore();
    getline(in, mh.course);
    db[mh.id] = mh.course;
    return in;
}
istream & operator >> (istream &in, LichThi &lich) {
    in >> lich.id >> lich.day >> lich.hour >> lich.group;
    string sothutu = "T";
    string temp = to_string(dem);
    dem++;
    while (temp.size() < 3) {
        temp = "0" + temp;
    }
    sothutu += temp;
    lich.stt = sothutu;
    lich.name = db[lich.id];
    lich.sosanhngay = lich.day;
    reverse(lich.sosanhngay.begin(), lich.sosanhngay.end());
    return in;
}
ostream & operator << (ostream &out,LichThi &lt) {
	out << lt.stt << " " << lt.id << " " << lt.name << " " << lt.day << " " << lt.hour << " " << lt.group << endl;
	return out;
}
bool cmp(LichThi a, LichThi b) {
    if (a.sosanhngay == b.sosanhngay) {
        if (a.hour == b.hour) {
            return a.id < b.id;
        }
        return a.hour < b.hour;
    }
    return a.sosanhngay < b.sosanhngay;
}
void process(MonHoc *mh, int n, LichThi *lt, int m) {
    for (int i = 0; i < m; i++) {
    	res.push_back(lt[i]);
	}
	sort(res.begin(), res.end(), cmp);
	for (int i = 0; i < m; i++) {
		lt[i] = res[i];
	}

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
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
