#include <bits/stdc++.h>
using namespace std;
void testCase();

//explicit
void testCase() {
    int n;
    long long s;
    cin >> n >> s;
    vector<pair<int,int>> v;
    for (int i= 0; i < n; i++) {
        pair<int,int> temp;
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (int i= 0;i < v.size(); i++) {
        if (s > v[i].first) {
            s += v[i].second;
        } else {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}