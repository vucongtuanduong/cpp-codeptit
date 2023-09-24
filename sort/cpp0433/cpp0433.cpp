#include <iostream>
//#include <pair>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
void testCase();
bool sx(pair<int,int> a, pair<int, int> b);
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
    int a[n];
    vector<pair<int, int>> v;
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for (auto x : m) {
        v.push_back({x.first, x.second});
    }
    sort(v.begin(), v.end(), sx);
    for (int i = 0; i < v.size(); i++) {
        int se = v[i].second;
        while (se--) {
            cout << v[i].first << " ";
        }
    }

}
bool sx(pair<int,int> a, pair<int, int> b) {
    if (a.second == b.second ) {
        return a.first < b.first;
    }
    return a.second > b.second;
}