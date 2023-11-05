#include <iostream>
using namespace std;
/*
Trên hệ thống phim của một website có các thông tin bộ phim bao gồm Mã phim, Tên phim, Ngày khởi chiếu, Số tập phim, Thể loại. Mã phim được đánh số tự động từ P001, P002 và tự động tăng dần. Thể loại phim bao gồm thông tin Mã thể loại và Tên thể loại. Mã thể loại được đanh số tự động tăng dần từ TL001, TL002

Cho danh sách các phim trên hệ thống, hãy thực hiện sắp xếp danh sách các bộ phim theo thứ tự ưu tiên ngày khởi chiếu tăng dần, tên phim sắp xếp theo thứ tự từ điển, số tập phim giảm dần.

Input:

Dòng đầu tiên cho 2 số N, M lần lượt là số lượng thể loại và số lượng bộ phim.

N dòng tiếp theo là thông tin tên thể loại. Mã thể loại tự động sinh theo thứ tự nhập vào

M dòng còn lại mỗi dòng là thông tin phim bao gồm Mã thể loại, ngày khởi chiếu (dd/mm/yyyy) tên phim và số tập phim (số nguyên tối đa 10000).

Output:

Danh sách phim đã sắp xếp như mẫu, mỗi phim trên một dòng

Ví dụ:

Input

Output

2 3

Hai huoc

Tinh cam

TL001

25/11/2021

Phim so 1

10

TL001

04/12/2021

Phim so 2

15

TL002

25/11/2021

Phim so 3

5
*/
struct theloai
{
    string ma, ten;
};
struct phim
{
    string ma, ten, ngay;
    int tap;
    theloai tl;
};
void nhap(theloai &tl)
{
    cin >> tl.ten;
}
void nhap(phim &p)
{
    cin >> p.tl.ma >> p.ngay;
    cin.ignore();
    getline(cin, p.ten);
    cin >> p.tap;
}
void nhap(theloai tl[], int n)
{
    for (int i = 0; i < n; i++)
        nhap(tl[i]);
}
void nhap(phim p[], int m)
{
    for (int i = 0; i < m; i++)
        nhap(p[i]);
}
void xuat(theloai tl)
{
    cout << tl.ten << endl;
}
void xuat(phim p)
{
    cout << p.tl.ma << " " << p.ngay << " " << p.ten << " " << p.tap << endl;
}
void xuat(theloai tl[], int n)
{
    for (int i = 0; i < n; i++)
        xuat(tl[i]);
}
void xuat(phim p[], int m)
{
    for (int i = 0; i < m; i++)
        xuat(p[i]);
}
int main ( ){
        int n, m;
    cin >> n >> m;
    theloai tl[n];
    phim p[m];
    nhap(tl, n);
    nhap(p, m);
    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            if (p[i].ngay > p[j].ngay)
                swap(p[i], p[j]);
            else if (p[i].ngay == p[j].ngay)
            {
                if (p[i].ten > p[j].ten)
                    swap(p[i], p[j]);
                else if (p[i].ten == p[j].ten)
                    if (p[i].tap < p[j].tap)
                        swap(p[i], p[j]);
            }
    for (int i = 0; i < m; i++)
        xuat(p[i]);
}