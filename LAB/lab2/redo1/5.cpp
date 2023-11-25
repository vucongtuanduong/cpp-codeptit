//cunghoangdao
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void testCase();


void testCase() {
    int month, day;
    cin >> day >> month;
    if ((month == 3 || month == 4) && (day <= 19 || day >= 21)) {
        cout << "Bach Duong";
    } else if ((month == 4 || month == 5) ) {
        cout << "Kim Nguu";
    } else if ((month == 5 || month == 6) && (day >= 21 || day <= 20)) {
        cout << "Song Tu";
    } else if ((month == 6 || month == 7) && (day >= 21 || day <= 22)) {
        cout << "Cu Giai";
    } else if ((month == 7 || month == 8) && (day >= 23 || day <= 22)) {
        cout << "Su Tu";
    } else if ((month == 8 || month == 9) && (day >= 23 || day <= 22)) {
        cout << "Xu Nu";
    } else if ((month == 9 || month == 10) && (day >= 23 || day <= 22)) {
        cout << "Thien Binh";
    } else if ((month == 10 || month == 11) && (day >= 23 || day <= 21)) {
        cout << "Bo Cap";
    } else if ((month == 11 || month == 12) && (day >= 22 || day <= 21)) {
        cout << "Nhan Ma";
    } else if ((month == 12 || month == 1) && (day >= 22 || day <= 19)) {
        cout << "Ma Ket";
    } else if ((month == 1 || month == 2) && (day >= 20 || day <= 18)) {
        cout << "Bao Binh";
    } else if ((month == 2 || month == 3) && (day >= 19 || day <= 20)) {
        cout << "Song Ngu";
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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