#include <iostream>
#include <fstream>
#include <map>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;


int demKh = 1;
int demMh = 1;
int demHd = 1;

map<string, KhachHang> khMap;
map<string, MatHang> mhMap;

class KhachHang {
    public:
        string khId = "KH";
        string khName;
        string gender;
        string address;
        string dob;
        friend istream &operator >> (istream &in, KhachHang &kh) {
//            if (demKh == 1) {
//                in.ignore();
//            }
            string temp = to_string(demKh);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            kh.khId += temp;
            demKh++;
            getline(in, kh.khName);
            getline(in , kh.gender);
            getline(in, kh.dob);
            getline(in, kh.address);
            // cout << kh.khId << endl;
            // cout << kh.khName << endl;
            // cout << kh.gender << endl;
            // cout << kh.dob << endl;
            // cout << kh.address << endl;
            khMap[kh.khId] = kh;
            return in;
        }

};
class MatHang {
    public:
        string mhId = "MH";
        string mhName;
        string donvi;
        int buyPrice;
        int sellPrice;
        friend istream &operator >> (istream &in, MatHang &mh) {
            // if (demMh == 1) {
            //     in.ignore();
            // }
            // in.ignore();
            string temp = to_string(demMh);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            mh.mhId += temp;
            demMh++;
            getline(in, mh.mhName);
            getline(in, mh.donvi);
            in >> mh.buyPrice;
            in >> mh.sellPrice;
            in.ignore();
            // cout << mh.mhId << endl;
            // cout << mh.mhName << endl;
            // cout << mh.donvi << endl;
            // cout << mh.buyPrice << endl;
            // cout << mh.sellPrice << endl;

            mhMap[mh.mhId] = mh;
            return in;
        }
};
class HoaDon{
    public:
        string hdId = "HD";
        string khId;
        string mhId;
        int quantity;
        int thanhtien;
        friend istream &operator >> (istream &in, HoaDon &hd) {
            // if (demMh == 1) {
            //     in.ignore();
            // }
//            in.ignore();
            string temp = to_string(demHd);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            hd.hdId += temp;
            demHd++;
            in >> hd.khId >> hd.mhId >> hd.quantity;
            in.ignore();
            hd.thanhtien = mhMap[hd.mhId].sellPrice * hd.quantity;
            return in;
        }
        friend ostream &operator << (ostream &out, HoaDon hd) {
            out << hd.hdId << " " << khMap[hd.khId].khName << " " << khMap[hd.khId].address << " " << mhMap[hd.mhId].mhName << " " << mhMap[hd.mhId].donvi << " " << mhMap[hd.mhId].buyPrice << " " << mhMap[hd.mhId].sellPrice << " " << hd.quantity << " " << hd.thanhtien << endl;
            return out;
        }
};
int main ( ){
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream fileKh, fileMh, fileHd;
    fileKh.open("KH.in");
    fileMh.open("MH.in");
    fileHd.open("HD.in");
    int n, m ,k;
    fileKh >> n;
    fileMh >> m;
    fileHd >> k;
    fileKh.ignore();
    fileMh.ignore();
    fileHd.ignore();
    KhachHang *dskh = new KhachHang[n];
    MatHang *dsmh = new MatHang[m];
    HoaDon *dshd = new HoaDon[k];
    for (int i = 0; i < n; i++) {
        fileKh >> dskh[i];
    }
    for (int i = 0; i < m; i++) {
        fileMh >> dsmh[i];
    }
    for (int i = 0; i < k; i++) {
        fileHd >> dshd[i];
    }
    for (int i = 0; i < k; i++) {
        cout << dshd[i];
    }
}