#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n, m;
    cin >> n >> m;
    multiset<int> h;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        h.insert(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        auto it = h.upper_bound(x);
        if (it == h.begin()) {
            cout << -1 << "\n";
        }
        else {
            cout << *(--it) << "\n";
            h.erase(it);
        }
    }
    
}
int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    testCase();
}