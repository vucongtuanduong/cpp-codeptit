#include <iostream>
#include <map>
using namespace std;
void testCase();
int check(char x);
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
    string s;
    cin >> s;
    map<char , int> m;
    if (s[0] == '0') {
        cout << "INVALID";
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        
        if (!check(s[i])) {
            cout << "INVALID";
            return;
        } else {
            m[s[i]]++;
        }
    }
    if (m.size() == 10) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
int check(char x) {
    if (x >= '0' && x <= '9') {
        return 1;
    }
    return 0;
}