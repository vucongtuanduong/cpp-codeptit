#include <bits/stdc++.h>
//16:41
using namespace std;
int dem = 1;
map<string, string> monMap;//id -> ten
class MonThi{
    public:
        string id = "T";
        string courseId;
        string courseName;
        string date;
        string time;
        string ngay;
        string thang;
        string nam;
        string group;
        friend istream &operator >> (istream &in, MonThi &a) {
            string temp = to_string(dem);
            while  (temp.size() != 3) {
                temp = "0" + temp;
            }
            dem++;
            a.id += temp;

            string monId;
            in >> monId >> a.date >> a.time >> a.group;
            a.courseId = monId;
            a.courseName = monMap[monId];
            // cout << a.date << " " << a.time << endl;
            a.ngay = a.date.substr(0, 2);
            a.thang = a.date.substr(3, 2);
            a.nam = a.date.substr(6, 4);
            return in;
        }
        friend ostream &operator << (ostream &out, MonThi a) {
            out << a.id << " " << a.courseId << " " << a.courseName << " " << a.date << " " << a.time << " " << a.group<< endl;
            return out;
        }
};
bool cmp(MonThi a, MonThi b) {
    if (a.nam == b.nam) {
        if (a.thang == b.thang) {
            if (a.ngay == b.ngay) {
                if (a.time == b.time) {
                    return a.courseId < b.courseId;
                }
                return a.time < b.time;
            }
            return a.ngay < b.ngay;
        }
        return a.thang < b.thang;
    }
    return a.nam < b.nam;
}
void testCase() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string monId;
        string mon;
        getline(cin, monId);
        getline(cin, mon);
        monMap[monId] = mon;
    }
    MonThi *dsthi = new MonThi[m];
    for (int i = 0; i < m; i++) {
        cin >> dsthi[i];
    }
    sort(dsthi, dsthi + m, cmp);
    for (int i = 0; i < m; i++) {
        cout << dsthi[i];
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin >> t;
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}