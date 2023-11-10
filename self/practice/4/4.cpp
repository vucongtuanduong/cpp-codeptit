#include <iostream>
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

class KhachHang{
    public:
        string khId = "KH";
        string khName;
        string gender;
        string dob;
        string address;
        friend istream &operator >> (istream &in, KhachHang &kh) {
            if (demKh == 1) {
                in.ignore();
            }
            string temp = to_string(demKh);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            kh.khId += temp;
            demKh++;
            getline(in, kh.khName);
            getline(in, kh.gender);
            getline(in, kh.dob);
            getline(in, kh.address);

            khMap[kh.khId] = kh;
            return in;
        }
};
class MatHang{
    public:
        string mhId = "MH";
        string mhName;
        string donvi;
        int buyPrice;
        int sellPrice;
        
        friend istream &operator >> (istream &in, MatHang &mh) {
            if (demMh == 1) {
                in.ignore();
            }
            string temp = to_string(demMh);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            mh.mhId += temp;
            demMh++;
            getline(in, mh.mhName);
            getline(in, mh.donvi);
            cin >> mh.buyPrice >> mh.sellPrice;
            cin.ignore();

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
            if (demHd == 1) {
                in.ignore();
            }
            string temp = to_string(demHd);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            hd.hdId += temp;
            demHd++;
            cin >> hd.khId >> hd.mhId >> hd.quantity;
            cin.ignore();
            hd.thanhtien = hd.quantity * mhMap[hd.mhId].sellPrice;
            return in;
        }
        friend ostream &operator << (ostream &out, HoaDon hd) {
            out << hd.hdId << " " << khMap[hd.khId].khName << " " << khMap[hd.khId].address << " " << mhMap[hd.mhId].mhName << " " << mhMap[hd.mhId].donvi << " " << mhMap[hd.mhId].buyPrice << " " << mhMap[hd.mhId].sellPrice << " " << hd.quantity << " " << hd.thanhtien << endl;
            return out;
        }
};  
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}