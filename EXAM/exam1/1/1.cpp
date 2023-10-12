#include <bits/stdc++.h>
using namespace std;
void testCase();
int isPalindrome(long long n) {
    long long res = 0;
    long long x = n;
    while (x > 0) {
        res = res * 10 + (n % 10);
        x /= 10;
    }
    return (res == n);
}
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
    int n;
    cin >> n;
    string mien;
    cin >> mien;
    int nam;
    int ngay;
    cin >> nam >> ngay;
    int thang[12];
    if (nam % 100 == 0 || nam % 4 == 0) {
        for (int i = 0; i < 12; i++) {
            thang[0] = nam - 31;
            nam -= 31;
            thang[1] = nam - 29;
            thang[2] = nam - 31;
            thang[3] = nam - 30;
            thang[4] = nam - 31;
            thang[5] = nam - 30;
            thang[6] = nam - 31;
            thang[7] = nam - 31;
            thang[8] = nam - 30;
            thang[9] = nam - 31;
            thang[10] = nam - 30;
            thang[11] = nam - 31;
            nam -= 29;
            nam -= 31;
             nam -= 30;
             nam -= 31;
             nam -= 30;
             nam -= 31;
             nam -= 31;
             nam -= 30;
             nam -= 31;
            nam -= 30;
             nam -= 31;

        }
    }


}