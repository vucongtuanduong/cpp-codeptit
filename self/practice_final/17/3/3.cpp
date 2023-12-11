#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    int a[n][n];
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++) {
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            temp.push_back(a[i][j]);
        }
        sort(temp.begin(), temp.end());
        v.push_back(temp);
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}