#include <iostream>
using namespace std;
void testCase() ;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase() ;
        cout << endl;
    }
}
void testCase( ){
    int n;
    cin >> n; 
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long res = 1;
    for (int i = 0; i < n; i++) {
        long long temp = 1;
        for (int j = i; j < n; j++) {
            temp *= a[j];
            res = max(res, temp);
        }
    }
    cout << res;
}