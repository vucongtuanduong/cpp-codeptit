#include <bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;

int demKh = 1, demHd = 1, demMh = 1;

map<string,KhachHang> khMap;
map<string,MatHang> mhMap;

class KhachHang{
    public:
        string khId = "KH";
        string khName;
        string gender;
        string dob;
        string address;
        friend istream &operator >> (istream &in, KhachHang &a) {
        	if (demKh == 1) {
        		in.ignore();
			}
            string temp = to_string(demKh);
            demKh++;
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            a.khId += temp;
            getline(in, a.khName);
            getline(in, a.gender);
            getline(in, a.dob);
            getline(in, a.address);

            khMap[a.khId] = a;
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
        friend istream &operator >> (istream &in, MatHang &a) {
        	if (demMh == 1) {
        		in.ignore();
			}
            string temp = to_string(demMh);
            demMh++;
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            a.mhId += temp;
            getline(in, a.mhName);
            getline(in, a.donvi);
            in >> a.buyPrice;
            in >> a.sellPrice;
            in.ignore();

            mhMap[a.mhId] = a;
            return in;
        }
};
class HoaDon{
    public:
        string hdId = "HD";
        string khId;
        string mhId;
        int qty;
        int profit;
        int thanhtien;
        friend istream &operator >> (istream &in, HoaDon &a) {
            string temp = to_string(demHd);
            demHd++;
            while (temp.size() != 3) {
                temp = "0" + temp;
            }
            a.hdId += temp;
            
            in >> a.khId >> a.mhId >> a.qty;
            a.profit = a.qty * (mhMap[a.mhId].sellPrice - mhMap[a.mhId].buyPrice);
            a.thanhtien = a.qty * mhMap[a.mhId].sellPrice;
            
            return in;
        }
        friend ostream &operator << (ostream &out, HoaDon a) {
            out << a.hdId << " " << khMap[a.khId].khName << " " << khMap[a.khId].address << " " << mhMap[a.mhId].mhName << " " << a.qty << " " << a.thanhtien << " " << a.profit << endl;
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