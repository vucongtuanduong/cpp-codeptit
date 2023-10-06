#include <iostream>
#include <map>
#include <fstream>
#include <vector>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
int countKhachHang = 1;
int countMatHang = 1;
int countHoaDon = 1;
map<string, KhachHang> KH;
map<string, MatHang> MH;
//KhachHang dskh[25];
//MatHang dsmh[45];
// HoaDon dshd[105];
vector<HoaDon> dshd;
int n,m,k,i;
class KhachHang{
    private:
        
    public:
        string customer_id;
        string customer_name;
        string customer_gender;
        string customer_dob;
        string customer_address;
        friend class HoaDon;
        
};
class MatHang{
    private:
        
    public:
        string hanghoa_id;
        string hanghoa_name;
        string donvitinh;
        long long buy_price;
        long long sell_price;
        friend class HoaDon;
};
class HoaDon{
    private:
        
    public:
        string bill_id;
        string customer_id;
        string hanghoa_id;
        long long quantity;
};
void getKH() {
    ifstream ifs("KH.in");
    ifs >> n;
    ifs.ignore();
    for (int i = 0; i < n; i++) {
        KhachHang kh;
        // getline(ifs, kh.customer_id);
        getline(ifs, kh.customer_name);
        getline(ifs, kh.customer_gender);
        getline(ifs, kh.customer_dob);
        getline(ifs, kh.customer_address);
        string temp = to_string(countKhachHang);
        if (temp.size() == 1) {
            temp = "0" + temp;
        } 
        kh.customer_id = "KH0" + temp;
        countKhachHang++;
        KH[kh.customer_id] = kh;
    }
}
void getMH() {
    ifstream ifs("MH.in");
    ifs >> m;
    ifs.ignore();
    for (int i = 0; i < m; i++) {
        MatHang mh;
        // getline(ifs, mh.hanghoa_id);
        getline(ifs, mh.hanghoa_name);
        getline(ifs, mh.donvitinh);
        ifs >> mh.buy_price;
        ifs >> mh.sell_price;
        ifs.ignore();
        string temp = to_string(countMatHang);
        if (temp.size() == 1) {
            temp = "0" + temp;
        } 
        mh.hanghoa_id = "MH0" + temp;
        countMatHang++;
        MH[mh.hanghoa_id] = mh;
    }
}
void getHD() {
    ifstream ifs("HD.in");
    ifs >> k;
    ifs.ignore();
    for (int i = 0; i < k; i++) {
        HoaDon hd;
        // getline(ifs, hd.bill_id);
        ifs>>hd.customer_id;
        ifs>>hd.hanghoa_id;
        ifs >> hd.quantity;
        ifs.ignore();
        string temp = to_string(countHoaDon);
        if (temp.size() == 1) {
            temp = "0" + temp;
        } 
        hd.bill_id = "HD0" + temp;
        countHoaDon++;
        dshd.push_back(hd);
    }
}
void printHD() {
    for (int i = 0; i < dshd.size(); i++) {
        cout << dshd[i].bill_id << " " << KH[dshd[i].customer_id].customer_name << " " << KH[dshd[i].customer_id].customer_address << " " << MH[dshd[i].hanghoa_id].hanghoa_name << " " << MH[dshd[i].hanghoa_id].donvitinh << " " << MH[dshd[i].hanghoa_id].buy_price << " " << MH[dshd[i].hanghoa_id].sell_price << " " << dshd[i].quantity << " " << dshd[i].quantity * MH[dshd[i].hanghoa_id].sell_price << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    getKH();
	getMH();
	getHD();
	printHD();
    return 0;
}