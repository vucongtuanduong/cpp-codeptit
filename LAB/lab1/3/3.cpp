#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
void testCase();
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

    // testCase();
    
}
void testCase() {
    int n;
    cin >> n;
    int a[n];
    map<int,int> m;
    map<int,int> index;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        m[a[i]]++;
        if (m[a[i]] == 1) {
            index[i]++;
        }
        if (m[a[i]] >= 2) {
            index[i] = a[i];
            
        }
    }
    int i = 0;
    for (auto x : index) {
        if (i == x.first && m[a[i]] >= 2) {
            cout << a[i];
            return;
        }
        i++;
    }
    cout << "NO";
}
