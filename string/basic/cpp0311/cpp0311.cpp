#include <iostream>
#include <map>
using namespace std;
void testCase();
int main () {
    int t;
    cin >> t;
    while(t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    int max = 0;
    for (auto x:m) {
        if (x.second > max) {
            max = x.second;
        }
    }
    int n = s.size();
    if (n % 2 == 0) {
        if (max > (n / 2)) {
            cout << "0";
        } else {
            cout << "1";
        }
    } else {
        int m = (int)n / 2 + 1;
        if (max > m) {
            cout << "0";
        } else {
            cout << "1";
        }
    }
}