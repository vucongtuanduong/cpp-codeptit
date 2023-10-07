#include <iostream>
using namespace std;
void testCase();
int main (){
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
void testCase () {
    string a;
    long long b,c,res = 0;
    cin >> a >> b >> c;
    for (int i = 0; i < a.size(); i++) {
        res = (res * 10 + (b * (a[i] - '0'))) % c;
    }
    cout << res;
}