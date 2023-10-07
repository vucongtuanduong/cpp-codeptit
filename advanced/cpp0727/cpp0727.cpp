#include <iostream>
using namespace std;
void testCase();
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
void testCase (){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    long long nextTo = a[0];
    long long prev = 0;
    long long prev_new;
    for (int i = 1; i < n; i++) {
        prev_new = max(nextTo, prev);
        nextTo = prev + a[i];
        prev = prev_new;
    }
    cout << max(prev, nextTo);
}