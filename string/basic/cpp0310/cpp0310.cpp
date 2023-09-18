#include <iostream>
using namespace std;
void testCase();
long long smalling(string x);
long long bigger(string x);
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string x1, x2;
    cin >> x1;
    cin >> x2;
    // cout << x1 << endl;
    // cout << x2 << endl;
    long long small = smalling(x1) + smalling(x2);
    long long big = bigger(x1) + bigger(x2);
    cout << small << " " << big;

}
long long smalling(string x) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '6') {
            x[i] = '5';
        }
    }
    // cout << x << endl;
    return stoll(x);
}
long long bigger(string x) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '5') {
            x[i] = '6';
        }
    }
    // cout << x << endl;
    return stoll(x);
}