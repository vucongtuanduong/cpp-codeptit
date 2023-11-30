#include <bits/stdc++.h>
using namespace std;

void testCase();

//explicit

void testCase() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i= 0 ;i < n; i++) {
        cin >> a[i];
    }
    int l, r;
    cin >> l >> r;
    bool isIncrease = false;
    bool isDecrease = false;

    int i = l + 1;
    while (i <= r) {
        if (a[i] > a[i - 1] && isDecrease == false && isIncrease == false) {
            isIncrease = true;
        } else if (a[i] > a[i - 1] && isIncrease == false) {
            isIncrease = true;
        } 
        else if (a[i] > a[i - 1] && isDecrease == true) {
            cout << "No";
            return;
        } else if (a[i] < a[i - 1] && isIncrease == true && isDecrease == false) {
            isIncrease = false;
            isDecrease = true;
        } else if (a[i] < a[i - 1] && isDecrease == false && isIncrease == false) {
            cout << "No";
            return;
        }
        i++;
    }
    cout << "Yes";
}
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