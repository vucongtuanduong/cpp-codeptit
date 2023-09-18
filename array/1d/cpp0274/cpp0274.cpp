#include <bits/stdc++.h>
using namespace std;
void testCase();

void testCase2();//bai cua TQB
int main () {
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
    map<int, int>m;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    for (auto x: m) {
        if (x.second > 1) {
            res += x.second;
        }
    }
    cout << res;

}

void testCase2() {
    
}