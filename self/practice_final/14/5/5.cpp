#include <bits/stdc++.h>
using namespace std;
int x[1005];
    int n;
bool isFirst() {
    for (int i = 1; i <= n; i++) {
        if (x[i] != i) {
            return false;
        }
    }
    return true;
}
void testCase() {
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    if (isFirst()) {
        for (int i = 1; i <= n; i++) {
            x[i] = n - i + 1;
        }
    } else {
        int t = n - 1;
        while (x[t] < x[t + 1] ) {
            t--;
        }

        int k = n;
        while (x[t] < x[k] ) {
            k--;
        }
        // cout << "t: " << t << ", k: " << k << endl;
        swap(x[t], x[k]);
        int l = t + 1, r = n;
        while (l <= r) {
            swap(x[l], x[r]);
            l++;
            r--;
        }


    }
    for (int i= 1; i <= n; i++) {
        cout << x[i] << " ";
    }
    
   
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