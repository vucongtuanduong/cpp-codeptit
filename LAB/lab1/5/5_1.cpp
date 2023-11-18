#include <iostream>
#include <climits>
#include <vector>

using namespace std;
void testCase();


void testCase() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
            index = i;
        }
        if (x < 0) {
            a.push_back(x);
        } else {
            b.push_back(x);
        }
    }
    int ok = 0;
    for (int i = 0; i < a.size(); i++) {
        if (ok == 0 && a[i] == max) {
            cout << m << " " << a[i] << " ";
            ok = 1;
        } else {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (ok == 0 && b[i] == max) {
            cout << m << " " << b[i] << " ";
        } else {
            cout << b[i] << " ";
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}