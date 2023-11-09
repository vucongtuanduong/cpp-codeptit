#include <iostream>
using namespace std;
void testCase();
int main  () {
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
    cin.ignore();
    string s;
    getline(cin, s);
    // cout << s << endl;
    int n;
    cin >> n;
    long long res = 0;
    while (n--) {
        long long x;
        cin >> x;
        if (x < 0) {
            res += abs(x);
        }
    }
    if (res >= 1e8) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}