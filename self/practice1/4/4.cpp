//https://github.com/vucongtuanduong/cpp-codeptit/blob/main/LAB/lab2/B%C3%A0i%20Th%E1%BB%B1c%20H%C3%A0nh%20S%E1%BB%91%202%20-%20C%2B%2B/%C4%90%E1%BB%81%20b%C3%A0i/B%C3%A0i16.png
#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;

class Phim;
class TheLoai;

map<string, TheLoai> theloaiMap;

int demPhim = 1;
int demTl = 1;





class TheLoai{
    public:
        string theloaiId = "TL";
        string theloaiName;
        friend istream &operator >> (istream &in, TheLoai &tl) {
            
            // if (demTl == 1) {
            //     in.ignore();
            // }
            getline(in, tl.theloaiName);

            string temp = to_string(demTl);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }

            tl.theloaiId += temp;
            demTl++;

            theloaiMap[tl.theloaiId] = tl;

            return in;
        }
};
class Phim{
    public:
        string filmId = "P";
        string filmName;
        string date;
        int episodes;
        string theloai;
        string ngay;
        string thang;
        string nam;
        friend class TheLoai;
        friend istream &operator >> (istream &in, Phim &phim) {
//            in.ignore();
//			if (demPhim == 1) {
//				in.ignore();
//			}
            string temp = to_string(demPhim);
            demPhim++;

            while (temp.size() != 3) {
                temp.insert(0, "0");

            }
            phim.filmId += temp;

            string tlInput;
            getline(in, tlInput);
//            cout << "tlInput: " << tlInput << endl;
            phim.theloai = theloaiMap[tlInput].theloaiName;
            getline(in, phim.date);
            phim.ngay = phim.date.substr(0,2);
            phim.thang = phim.date.substr(3,2);
            phim.nam = phim.date.substr(6,4);
            getline(in, phim.filmName);
            in >> phim.episodes;
            in.ignore();
            return in;
        }
        friend ostream &operator << (ostream &out, Phim p) {
            out << p.filmId << " " << p.theloai << " " << p.date << " " << p.filmName << " " << p.episodes << endl;
            return out;
        }
};
bool cmp(Phim a, Phim b) {
    if (a.nam == b.nam) {
        if (a.thang == b.thang) {
            if (a.ngay == b.ngay) {
                if (a.filmName == b.filmName) {
                    return a.episodes > b.episodes;
                }
                return a.filmName < b.filmName;
            }
            return a.ngay < b.ngay;
        }
        return a.thang < b.thang;
    }
    return a.nam < b.nam;
}

void process(TheLoai *tl, int n, Phim *p, int m) {
    sort(p, p + m, cmp);
}
int main  (){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, m;
    cin >> n >> m;
    cin.ignore();
    TheLoai tl[100];
    Phim p[1000];
    for (int i = 0; i < n; i++) cin >> tl[i];
    for (int i = 0; i < m; i++) cin >> p[i];
    process(tl, n, p, m);
    for (int i = 0; i < m; i++) cout << p[i];
}