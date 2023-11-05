#include <iostream>
using namespace std;
void testCase();
int main ( ) {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    long long t;
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
    long long n;
    cin >> n;
    long long res = 0;
    while (n --) {
        long long x;
        cin >> x;
        res += x;
    }
    // cout << s << endl;
    // cout << in << endl;
    // cout << out << endl;
    // cout << res << endl;
    if (res <= -1e8) {
        cout << "YES";

    } else {
        cout << "NO";
    }
}