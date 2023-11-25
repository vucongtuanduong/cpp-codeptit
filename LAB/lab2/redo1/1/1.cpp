//ngan hang techcombank
#include <iostream>
using namespace std;
void testCase();


void testCase() {
    string s;
    getline(cin, s);
    // cout << s << endl;
    int n;
    cin >> n;
    int out = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x < 0) {
            out += abs(x);
        }
        // cout << out << endl;
    }
    if (out >= 1e8) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cin.ignore();
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
}