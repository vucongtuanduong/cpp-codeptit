#include <bits/stdc++.h>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // testCase();
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string mien;
    cin >> mien;
    int nam;
    int ngay;
    int thang;
    cin >> nam >> ngay;
    int tempNgay = ngay;
    int thangKoNhuan[12] = {31, 29, 31, 30 , 31,30, 31, 31 ,30, 31, 30, 31 };
    int thangNhuan[12] = {31, 28, 31, 30 , 31,30, 31, 31 ,30, 31, 30, 31 };
    int check[12] = {0};
    if (nam % 4 == 0 || nam % 400 == 0) {
        int i = 0;
        while (tempNgay > 0) {
            tempNgay -= thangNhuan[i];
            
            check[i] = 1;
            ++i;
        }
        int j = 0;
        int ok = 0;
        for (j; j < 12; j++) {
            if (check[j] == 0) {
                thang = j;
                ok = 1;
                break;
            }
        }

        if (ok == 0) {
            thang = j + 1;
        } else if (ok == 1 && check[11] == 0 && tempNgay >=  0) {
            thang = 12;
        }
        cout << "nam nhuan: " << endl;
        cout << "thang: " << thang << endl;
    } else {
        int i = 0;
        while (tempNgay >= 0) {
            tempNgay -= thangKoNhuan[i];
            
            check[i] = 1;
            i++;
        }
        int j = 0;
        int ok = 0;
        for (j; j < 12; j++) {
            if (check[j] == 0) {
                thang = j;
                ok = 1;
                break;
            }
        }
        if (ok == 0) {
            thang = j + 1;
        } else if (ok == 1 && check[11] == 1) {
            thang = 12;
        }
        cout << "nam khong nhuan: " << endl;
        cout << "thang: " << thang << endl;
    }
    string muaBac, muaNam;
    if (mien == "Bac") {
        if (thang >= 2 && thang <= 4) {
            muaBac = "Xuan";
        } else if (thang >= 5 && thang <= 7) {
            muaBac = "He";
        } else if (thang >= 8 && thang <= 10) {
            muaBac = "Thu";
        } else {
            muaBac = "Dong";
        }
        cout << muaBac;
    } else if (mien == "Nam") {
        if (thang >= 11 || thang <= 4) {
            muaNam = "Kho";
        } else {
            muaNam = "Mua";
        }
        cout << muaNam;
    }

}