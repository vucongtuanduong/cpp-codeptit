#include <bits/stdc++.h>
using namespace std;
int dem =1;
struct Thi{
    string stt;
    string id;
    string name;
    string day;
    string hour;
    string group;
    string ngaythi;
    string thangthi;
    string namthi;
};
bool cmp(Thi a, Thi b) {
    if (a.namthi == b.namthi) {
        if (a.thangthi == b.thangthi) {
            if (a.ngaythi == b.ngaythi) {
                if (a.hour == b.hour) {
                    return a.name < b.name;
                }
                return a.hour < b.hour;
            }
            return a.ngaythi < b.ngaythi;
        }
        return a.thangthi == b.thangthi;
    }
    return a.namthi == b.namthi;
}
void testCase() {
    int n,  k;
    cin >> n >> k;
    map<string, string> m;
//    cout << n << endl;
    cin.ignore();
    for (int i = 0; i < n; i++) {
		string ma;
        string ten;
        cin >> ma;
        cin.ignore();
        getline(cin, ten);
        m[ma] = ten;
//        cout << ma << ten << endl;
        
    }
    vector<Thi> res;
    for (int i = 0; i < k; i++) {
        Thi lich;
        cin >> lich.id >> lich.day >> lich.hour >> lich.group;
        string sothutu = "T";
        string temp = to_string(dem);
        dem++;
        while (temp.size() < 3) {
            temp = "0" + temp;
        }
        sothutu += temp;
        lich.stt = sothutu;
        lich.name = m[lich.id];
        lich.ngaythi = lich.day.substr(0,2);
        lich.thangthi = lich.day.substr(3,2);
        lich.namthi = lich.day.substr(6,4);
        res.push_back(lich);
    }
    sort(res.begin(), res.end(), cmp);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i].stt << " " << res[i].id << " " << res[i].name << " " << res[i].day << " " << res[i].hour << " " << res[i].group << endl;
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
