#include <bits/stdc++.h>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void testCase() {
    string s;
    cin >> s;
    int year, day;
    cin >> year >> day;
    string mua;
    if (s == "Bac") {
        if (isLeapYear(year)) {
            if (day >= 1 && day <= 31) {
                mua = "Dong";
            } else if (day >= 32 && day <= 121) {
                mua = "Xuan";
            } else if (day >= 122 && day <= 213) {
                mua = "He";
            } else if (day >= 214 && day <= 305) {
                mua = "Thu";
            } else {
                mua = "Dong";
            }
        } else {
            if (day >= 1 && day <= 31) {
                mua = "Dong";
            } else if (day > 31 && day <= 120) {
                mua = "Xuan";
            } else if (day > 120 && day <= 212) {
                mua = "He";
            } else if (day > 212 && day <= 304) {
                mua = "Thu";
            } else {
                mua = "Dong";
            }
        }
    } else {
        if (isLeapYear(year)) {
            if (day > 121 && day <= 305) {
                mua = "Mua";
            } else {
                mua = "Kho";
            }
        } else {
            if (day > 120 && day <= 304) {
                mua = "Mua";
            } else {
                mua = "Kho";
            }
        }
    }
    cout << mua;

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
    // testCase();
}