#include <bits/stdc++.h>
using namespace std;
class Zodiac{
    public:
        
        int startDay;
        int startMonth;
        int endDay;
        int endMonth;
        string cung;
};
vector<Zodiac> zodiacs = {
    {21,3,19,4,"Bach Duong"},
    {20, 4, 20 ,5 ,"Kim Nguu"},
    {21,5,20,6,"Song Tu"},
    {21,6, 22, 7,"Cu Giai"},
    {23,7,22,8,"Su Tu"},
    {23,8,22,9,"Xu Nu"},
    {23,9,22,10,"Thien Binh"},
    {23,10,22,11,"Thien Yet"},
    {23,11,21,12,"Nhan Ma"},
    {22,12,19,1,"Ma Ket"},
    {20, 1, 18,2,"Bao Binh"},
    {19,2,20,3,"Song Ngu"},

};
void testCase() {
    int ngay,thang;
    cin >> ngay >> thang;
    for (auto x : zodiacs) {
        if ((thang == x.startMonth && ngay >= x.startDay) || (thang==x.endMonth && ngay <= x.endMonth)) {
            cout << x.cung ;
            return;
        }
    }
}
int main () {
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    // testCase()
}