#include <bits/stdc++.h>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase( ){
    int d, m;
    cin >> d >> m;
    if ((d >= 21 || d <= 19) && (m == 3 || m == 4)) {
        cout << "Bach Duong";
    } else if ((d != 20) && (m == 5 || m == 4) ) {
        cout << "Kim Nguu";
    } else if ((d >= 21 || d <= 20) && (m == 5 || m == 6)) {
        cout << "Song Tu";
    } else if ((d >= 21 || d <= 22) && (m == 6 || m == 7)) {
        cout << "Cu Giai";
    } else if ((d >= 23 || d <= 22) && (m == 7 || m == 8)) {
        cout << "Su Tu";
    } else if ((d >= 23 || d <= 22) && (m == 8 || m == 9) ) {
        cout << "Xu Nu";
    } else if ((d >= 23 || d <= 22) && (m == 9 || m == 10)) {
        cout << "Thien Binh";
    } else if ((d >= 23 || d <= 22) && (m == 10 || m == 11)) {
        cout << "Thien Yet";
    } else if ((d >= 23 || d <= 21) && (m == 11 || m == 12)) {
        cout << "Nhan Ma";
    } else if ((d >= 22 || d <= 19) && (m == 12 || m == 1) ) {
        cout << "Ma Ket";
    } else if ((d >= 20 || d <= 18) && (m == 1 || m == 2)) {
        cout << "Bao Binh";
    } else {
        cout << "Song Ngu";
    }
}
