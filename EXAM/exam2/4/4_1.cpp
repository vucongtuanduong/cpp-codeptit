/*
Cửa hàng bán sản phẩm điện máy, công cụ cơ khí mô tả thông tin mỗi sản phẩm gồm các thông tin:

Mã sản phẩm
Tên sản phẩm
Giá bán (USD)
Thời hạn bảo hành (tính theo tháng).
Hãy nhập thông tin sản phẩm và in danh sách sắp xếp theo giá bán giảm dần. Nếu giá bán bằng nhau thì sắp theo mã sản phẩm (thứ tự từ điển)

Input – file SANPHAM.in

Dòng đầu ghi số sản phẩm.

Mỗi sản phẩm ghi trên 4 dòng lần lượt là mã, tên, giá bán, thời hạn.

Output

Ghi ra danh sách sắp xếp theo yêu cầu. Mỗi sản phẩm ghi trên một dòng với đầy đủ: mã, tên, giá bán, thời hạn.

Ví dụ

Input – file SANPHAM.in

Output

2

KC740

May khoan KC1

39

18

KC742

May cat KC2

46

12

KC742 May cat KC2 46 12

KC740 May khoan KC1 39 18


*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class SanPham{
    private:
        string maSP;
        string tenSP;
        int giaBan;
        int thoiHan;
    public:
        void nhap();
        void xuat();
        int getGiaBan();
        string getMaSP();
        string getTenSP();
        int getThoiHan();
};
void SanPham::nhap(){
    cin >> maSP;
    cin.ignore();
    getline(cin, tenSP);
    cin >> giaBan >> thoiHan;
}
void SanPham::xuat(){
    cout << maSP << " " << tenSP << " " << giaBan << " " << thoiHan << endl;
}
int SanPham::getGiaBan(){
    return giaBan;
}
string SanPham::getMaSP(){
    return maSP;
}

string SanPham::getTenSP(){
    return tenSP;
}

int SanPham::getThoiHan(){
    return thoiHan;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<SanPham> a(n);
    for (int i = 0; i < n; i++) {
        a[i].nhap();
    }
    stable_sort(a.begin(), a.end(), [](SanPham a, SanPham b) {
        if (a.getGiaBan() == b.getGiaBan()) {
            return a.getMaSP() < b.getMaSP();
        }
        return a.getGiaBan() > b.getGiaBan();
    });
    for (int i = 0; i < n; i++) {
        a[i].xuat();
    }
}