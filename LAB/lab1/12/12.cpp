#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
map<long long, int> m;
void testCase();
void init();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    init();
    // cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }

    // testCase();
    
}
void testCase() {
    long long n;
    cin >> n;
    if (m[n] > 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
void init() {
    long long fibo[92];
    fibo[0] = 0;
    m[0]++;
    m[1]++;
    fibo[1] = 1;
    for (int i = 2; i < 92; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        m[fibo[i]]++;
    }
}
