#include <bits/stdc++.h>
using namespace std;
void testCase();
//explicit
void testCase() {
    int n;
    cin >> n;
    int *a = new int[n];
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = a[i] - 1; j >= 0; j--) {

        }
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}