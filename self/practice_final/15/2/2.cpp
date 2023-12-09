#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, d;
    cin >> n >> d;
    int a[n];
    vector<int> diff;
    for (int i = 0; i < n ;i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        int x = a[i] - a[i - 1];
        diff.push_back(x);
    }
    int res = 0;
    cout << "diff: \n";
    for (int k = 0; k < diff.size(); k++) {
        cout << diff[k] << " ";
    }
    cout << endl;
    for (int i = 0; i < diff.size(); i++) {
        if (diff[i] <= 0) {

            int x = d - diff[i];
            int times = (int) x / d;
            // cout << "time: " << times << endl;
            int totalAdd = times * d;
            diff[i] += totalAdd;
            if (i != diff.size() - 1) {
                diff[i + 1] -= totalAdd;
            }
            
            res += times;
            
            for (int k = 0; k < diff.size(); k++) {
                cout << diff[k] << " ";
            }
            cout << endl;
        }
    }
    cout << res;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}