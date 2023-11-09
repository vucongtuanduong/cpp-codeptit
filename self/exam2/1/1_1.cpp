#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;

int demKh = 1;
int demMh = 1;
int demHd = 1;

class KhachHang{
    private:
        
    public:
        string khId = "KH";
        string khName;
        string gender;
        string dob;
        string address;
        friend class HoaDon;
        friend istream &operator >> (istream &in, KhachHang &kh) {
            if (demKh == 1) {
                scanf("\n");
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


            return in;
        }

};
class MatHang{
    private:
        
    public:
        string mhId = "MH";
        string mhName;
        string donvi;
        int buyPrice;
        int sellPrice;
        friend class HoaDon;
        friend istream &operator >> (istream &in, MatHang &mh) {
            scanf("\n");
            string temp = to_string(demMh);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            mh.mhId += temp;
            demMh++;
            getline(in, mh.mhName);
            getline(in, mh.donvi);
            in >> mh.buyPrice >> mh.sellPrice;


            return in;
        }
};
class HoaDon{
    private:
        

        
    public:
        string hdId = "HD";
        string khId;
        string mhId;
        int quantity;
        int profit;
        int thanhtien;
        friend istream &operator >> (istream &in, HoaDon &hd, KhachHang kh, MatHang mh) {

            scanf("\n");
            string temp = to_string(demHd);
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            hd.hdId += temp;
            // cout << hd.hdId << endl;
            demHd++;
            cin >> hd.khId >> hd.mhId >> hd.quantity;
            hd.thanhtien = mhMap[hd.mhId].sellPrice * hd.quantity;
            hd.profit = hd.thanhtien - hd.quantity * mhMap[hd.mhId].buyPrice;
            return in;
        }
        friend ostream &operator << (ostream &out, HoaDon hd) {
            out << hd.hdId << " " << khMap[hd.khId].khName << " " << khMap[hd.khId].address << " " << mhMap[hd.mhId].mhName << " " << hd.quantity << " " << hd.thanhtien << " " << hd.profit << endl; 
            return out;
        }
};
bool cmp(HoaDon a, HoaDon b) {
    return a.profit >= b.profit;
}
void sapxep(HoaDon *dshd, int K) {
    sort(dshd, dshd + K, cmp);
}
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

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}