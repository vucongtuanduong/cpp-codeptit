#include <bits/stdc++.h>
using namespace std;
int demPhim = 1, demTl = 1;
class TheLoai;
class Phim;
map<string, TheLoai> tlMap;
class TheLoai{
    public:
        string tlId = "TL";
        string tlName;
        friend istream &operator >> (istream &in, TheLoai &a) {
            string temp = to_string(demTl);
            demTl++;
            while(temp.size() != 3) {
                temp = "0" + temp;
            }
            a.tlId += temp;
            getline(in, a.tlName);
            return in;
        }
};
class Phim{
    public:
        string phimId = "P";
        string phimName;
        string date;
        int episodes;
        string theloai;
        string ngay;
        string thang;
        string nam;
        friend istream &operator >> (istream &in, Phim &a) {
            string temp  = to_string(demPhim);
            demPhim++;
            while(temp.size() != 3) {
                temp = "0" + temp;
            }
            a.phimId += temp;
            string matl;
            getline(in, matl);
//            cout << matl << endl;
            a.theloai = tlMap[matl].tlName;
            getline(in, a.date);
            getline(in, a.phimName);
            in >> a.episodes;
            in.ignore();
            a.ngay = a.date.substr(0, 2);
            a.thang  = a.date.substr(3, 2);
            a.nam = a.date.substr(6, 4);

//            cout << a.phimId << " " << a.theloai << " " << a.phimName << " " << a.date << " "  << a.episodes << endl;
            return in;
        }
        friend ostream &operator << (ostream &out, Phim a) {
            out << a.phimId << " " << a.theloai << " " << a.date << " " << a.phimName << " " << a.episodes << endl;
            return out;
        }
};
bool cmp(Phim a, Phim b) {
    if (a.nam == b.nam) {
        if (a.thang == b.thang) {
            if (a.ngay == b.ngay) {
                if (a.phimName == b.phimName) {
                    return a.episodes > b.episodes;
                }
                return a.phimName < b.phimName;
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
        TheLoai a;
        cin >> a;
        tlMap[a.tlId] = a;
    }
    Phim *dsphim = new Phim[m];
    for (int i =0; i < m; i++) {
        cin >> dsphim[i];
//        cout << "\n map: \n";
//        for (auto x : tlMap) {
//            cout << x.first << endl;
//        }
    }
    sort(dsphim, dsphim + m, cmp);
    for (int i = 0; i < m; i++) {
        cout << dsphim[i];
    }
    
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}