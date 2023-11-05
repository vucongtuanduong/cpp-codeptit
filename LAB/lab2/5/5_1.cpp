/*

Trong chiêm tinh học phương Tây, các cung Hoàng Đạo là mười hai cung 30° của Hoàng Đạo, bắt đầu từ điểm phân Vernal (một trong những giao điểm của Hoàng Đạo với Xích đạo thiên cầu), còn được gọi là Điểm Đầu của Bạch Dương. Thứ tự của các cung Hoàng Đạo là Bạch Dương, Kim Ngưu, Song Tử, Cự Giải, Sư Tử, Xử Nữ, Thiên Bình, Thiên Yết, Nhân Mã, Ma Kết, Bảo Bình và Song Ngư. Mỗi khu vực được đặt tên theo chòm sao mà nó đi qua trong lúc đặt tên. Cung hoàng đạo của một người được xác định dựa trên ngày sinh bằng bảng dưới đây:

Cung

Tên cung

Thời gian

 
 


Bach Duong

21 tháng 3 - 19 tháng 4

 



Kim Nguu

20 tháng 4 - 20 tháng 5

 



Song Tu

21 tháng 5 - 20 tháng 6

 



Cu Giai

21 tháng 6 - 22 tháng 7

 



Su Tu

23 tháng 7 - 22 tháng 8

 



Xu Nu

23 tháng 8 - 22 tháng 9

 



Thien Binh

23 tháng 9 - 22 tháng 10

 



Thien Yet

23 tháng 10 - 22 tháng 11

 



Nhan Ma

23 tháng 11 - 21 tháng 12

 



Ma Ket

22 tháng 12 - 19 tháng 1

 



Bao Binh

20 tháng 1 - 18 tháng 2

 



Song Ngu

19 tháng 2 - 20 tháng 3

 

 

 

Ví dụ: nếu sinh nhật của một người là vào ngày 5 tháng 5, thì họ là Kim Ngưu, vì nó nằm trong khoảng từ ngày 21 tháng 4 đến ngày 20 tháng 5.

Nhiệm vụ của bạn là xác định cung hoàng đạo của một ngày sinh bất kỳ.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.

Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 2 số cách nhau bởi một khoảng trống d và m, trong đó d là ngày, m là tháng.

Output:

Đưa ra cung hoàng đạo dựa vào bảng đã cho tương ứng với ngày tháng nhập vào.

Input

Output

2

5 5

30 7

Kim Nguu

Su Tu
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        int d, m;
        cin >> d >> m;
        if (m == 1) {
            if (d >= 20) {
                cout << "Bao Binh" << endl;
            }
            else {
                cout << "Ma Ket" << endl;
            }
        }
        else if (m == 2) {
            if (d >= 19) {
                cout << "Song Ngu" << endl;
            }
            else {
                cout << "Bao Binh" << endl;
            }
        }
        else if (m == 3) {
            if (d >= 21) {
                cout << "Bach Duong" << endl;
            }
            else {
                cout << "Song Ngu" << endl;
            }
        }
        else if (m == 4) {
            if (d >= 20) {
                cout << "Kim Nguu" << endl;
            }
            else {
                cout << "Bach Duong" << endl;
            }
        }
        else if (m == 5) {
            if (d >= 21) {
                cout << "Song Tu" << endl;
            }
            else {
                cout << "Kim Nguu" << endl;
            }
        }
        else if (m == 6) {
            if (d >= 21) {
                cout << "Cu Giai" << endl;
            }
            else {
                cout << "Song Tu" << endl;
            }
        }
        else if (m == 7) {
            if (d >= 23) {
                cout << "Su Tu" << endl;
            }
            else {
                cout << "Cu Giai" << endl;
            }
        }
        else if (m == 8) {
            if (d >= 23) {
                cout << "Xu Nu" << endl;
            }
            else {
                cout << "Su Tu" << endl;
            }
        }
        else if (m == 9) {
            if (d >= 23) {
                cout << "Thien Binh" << endl;
            }
            else {
                cout << "Xu Nu" << endl;
            }
        }
        else if (m == 10) {
            if (d >= 23) {
                cout << "Thien Yet" << endl;
            }
            else {
                cout << "Thien Binh" << endl;
            }
        }
        else if (m == 11) {
            if (d >= 23) {
                cout << "Nhan Ma" << endl;
            }
            else {
                cout << "Thien Yet" << endl;
            }
        }
        else if (m == 12) {
            if (d >= 22) {
                cout << "Ma Ket" << endl;
            }
            else {
                cout << "Nhan Ma" << endl;
            }
        }
    }
    return 0;
}