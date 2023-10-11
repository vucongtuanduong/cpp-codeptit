#include <iostream>
using namespace std;
void testCase();
int main ( ){
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
    string n;
    long long m;
    cin >> n >> m;
    long long res = 0;
    for (int i = 0; i < n.size(); i++) {
        int temp = (n[i] - '0') % m;
        res = res * 10 + temp;
        res %= m;
    }
    cout << res;
}