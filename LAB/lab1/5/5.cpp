#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <climits>
using namespace std;
void testCase();

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
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    int index = -1;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
            index = i;
        }
        if (x < 0) {
            b.push_back(x);
        } else {
            a.push_back(x);
        }
    }
    int ok = 0;
    for (int i = 0; i < b.size(); i++) {
        if (ok == 0 && b[i] == max) {
            cout << m << " " << b[i] << " ";
            ok = 1;
        } else {
            cout << b[i] << " ";
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (ok == 0 && a[i] == max) {
            cout << m << " " << a[i] << " ";
            ok = 1;
        } else {
            cout << a[i] << " ";
        }
    }
    
}
 