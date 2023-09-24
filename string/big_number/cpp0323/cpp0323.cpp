#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
void bigMod(string x, long long y);
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
void testCase() {
    string x;
    long long y;
    cin >> x >> y;
    bigMod(x, y);
}
void bigMod(string x, long long y) {
    long long res = 0;
    for (int i = 0; i < x.size(); i++) {
        int temp = (x[i] - '0') % y;
        res = res * 10 + temp;
        
        res %= y;
    }
    cout << res;
}