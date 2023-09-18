#include <iostream>
#include <map>
#include <set>
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
    int n;
    cin >> n;
    map<int, int> m;
    for (int i  = 0; i < n; i++) {
        set<int> se;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            se.insert(x);
        }
        for(auto x: se) {
            m[x]++;
        }
    }
    int count = 0;
    for (auto x:m) {
        if (x.second == n) {
            count++;
        }
    }
    cout << count;
}