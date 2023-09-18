#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void testCase();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n, x;
    cin >> n >> x;
    map<int, int>m;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        m[s]++;
    }
    if (m[x] > 0) {
        cout << m[x];
    } else {
        cout << "-1";
    }
}