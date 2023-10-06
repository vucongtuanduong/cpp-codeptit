#include <iostream>
#include <map>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
int countKhachHang = 1;
int countMatHang = 1;
int countHoaDon = 1;
map<string, KhachHang> KH;
map<string, MatHang> MH;
class KhachHang{
    private:
        
    public:
        string customer_id;
        string customer_name;
        string customer_gender;
        string customer_dob;
        string customer_address;
        friend class HoaDon;
        friend istream & operator >> (istream &in, KhachHang &kh) {
            if (countKhachHang == 1) {
            	cin.ignore();
			}
            getline(in, kh.customer_name);
            getline(in, kh.customer_gender);
            getline(in, kh.customer_dob);
            getline(in, kh.customer_address);
            string temp = to_string(countKhachHang);
            if (temp.size() == 1) {
                temp = "0" + temp;
            } 
            kh.customer_id = "KH0" + temp;
            countKhachHang++;
            KH[kh.customer_id] = kh;
            return in;
        }
        
};
class MatHang{
    private:
        
    public:
        string hanghoa_id;
        string hanghoa_name;
        string donvitinh;
        int buy_price;
        int sell_price;
        friend class HoaDon;
        friend istream & operator >> (istream &in, MatHang &mh) {
            cin.ignore();
            getline(in, mh.hanghoa_name);
            getline(in, mh.donvitinh);
            in >> mh.buy_price >> mh.sell_price;
            string temp = to_string(countMatHang);
            if (temp.size() == 1) {
                temp = "0" + temp;
            } 
            mh.hanghoa_id = "MH0" + temp;
            countMatHang++;
            MH[mh.hanghoa_id] = mh;
            return in;
        }
};
class HoaDon{
    private:
        
    public:
        string bill_id;
        string customer_id;
        string hanghoa_id;
        long long quantity;
        friend istream& operator >> (istream& in, HoaDon &hd) {
            in >> hd.customer_id >> hd.hanghoa_id >> hd.quantity;
            string temp = to_string(countHoaDon);
            if (temp.size() == 1) {
                temp = "0" + temp;
            } 
            hd.bill_id = "HD0" + temp;
            countHoaDon++;
            return in;
        }
        friend ostream& operator << (ostream& out, HoaDon hd) {
            out << hd.bill_id << " " << KH[hd.customer_id].customer_name << " " << KH[hd.customer_id].customer_address << " " << MH[hd.hanghoa_id].hanghoa_name << " " << MH[hd.hanghoa_id].donvitinh << " " << MH[hd.hanghoa_id].buy_price << " " << MH[hd.hanghoa_id].sell_price << " " << hd.quantity << " " << hd.quantity * MH[hd.hanghoa_id].sell_price << endl;
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