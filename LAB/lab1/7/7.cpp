#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
void testCase();
long long minChange(long long x);
long long maxChange(long long x);
string bigSum(string s1, string s2);
string maxChange(string s);
string minChange(string s);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    // cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }

    // testCase();
    
}
void testCase() {
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<>());
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
}
