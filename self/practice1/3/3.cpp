//cpp0632
#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;

int demKh = 1;
int demMh = 1;
int demHd = 1;

map<string, KhachHang> khMap;
map<string, MatHang> mhMap;

class KhachHang{
    public:
        string khId = "KH";
        string khName;
        string gender;
        string dob;
        string address;
        friend istream &operator >> (istream &in, KhachHang &kh) {
            getline(in, kh.khName);
            getline(in, kh.gender);
            getline(in, kh.dob);
            getline(in, kh.address);
            
            string temp = to_string(demKh);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            kh.khId += temp;
            demKh++;

            khMap[kh.khId] = kh;

            return in;
        }
};

class MatHang{
    public:
        string mhName;
        string mhId = "MH";
        string donvi;
        int buyPrice;
        int sellPrice;
        friend istream &operator >> (istream &in, MatHang &mh) {
            
            getline(in, mh.mhName);
            getline(in, mh.donvi);
            in >> mh.buyPrice >> mh.sellPrice;
            in.ignore();
            
            string temp = to_string(demMh);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            mh.mhId += temp;
            demMh++;

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
        int profit;
        int thanhtien;
        friend istream &operator >> (istream &in, HoaDon &hd) {
            
            
            in >> hd.khId >> hd.mhId >> hd.quantity;
            in.ignore();
            
            string temp = to_string(demHd);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            hd.hdId += temp;
            demHd++;

            hd.thanhtien = mhMap[hd.mhId].sellPrice * hd.quantity;
            hd.profit = hd.thanhtien - mhMap[hd.mhId].buyPrice * hd.quantity;

            return in;
        }
        friend ostream &operator << (ostream &out, HoaDon hd) {
            out << hd.hdId << " " << khMap[hd.khId].khName << " " << khMap[hd.khId].address << " " << mhMap[hd.mhId].mhName << " " << mhMap[hd.mhId].donvi << " " << mhMap[hd.mhId].buyPrice << " " << mhMap[hd.mhId].sellPrice << " " << hd.quantity << " " << hd.thanhtien << endl;
            return out;
        }
};          


int main  (){ 
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    KhachHang dskh[100];
    MatHang dsmh[100];
    HoaDon dshd[105];

    fstream fileKh, fileMh, fileHd;
    fileKh.open("KH.in");
    fileMh.open("MH.in");
    fileHd.open("HD.in");
    int N,M,K,i;
    fileKh >> N;
    fileKh.ignore();
    for(i=0;i<N;i++) {
        fileKh >> dskh[i];
    }

    fileMh >> M;
    fileMh.ignore();
    for(i=0;i<M;i++) {
        fileMh >> dsmh[i];
    }
    fileHd >> K;
    fileHd.ignore();
    for(i=0;i<K;i++) {
        fileHd >> dshd[i];
    }


    for(i=0;i<K;i++) cout << dshd[i];

    fileKh.close();
    fileMh.close();
    fileHd.close();
    return 0;
}