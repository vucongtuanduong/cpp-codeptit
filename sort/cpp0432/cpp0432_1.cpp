#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
bool cmp(int a, int b);
int main ( ){
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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
}
bool cmp(int a, int b) {
    string x = to_string(a) + to_string(b);
    string y = to_string(b) + to_string(a);
    return x > y;
}