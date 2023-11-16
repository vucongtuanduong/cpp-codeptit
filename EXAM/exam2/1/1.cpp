#include <iostream>
#include <map>
using namespace std;
map<int, long long > fibo;
void init();
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void init() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

}
void testCase() {
    int n;
    cin >> n;
    cout << fibo[n] ;
}