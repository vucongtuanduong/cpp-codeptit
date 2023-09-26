#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
bool sx(string a, string b);
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
    int n;
    cin >> n;
    string a[n];
    for (auto &x : a) {
        cin >> x;
    }
    sort(a, a + n, sx);
    for (auto x : a) {
        cout << x;
    }
}
bool sx(string a, string b) {
    string x  = a + b;
    string y = b + a;
    return x > y;
}