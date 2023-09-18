#include <bits/stdc++.h>
using namespace std;
void testCase();
string tolower(string s);
void testCase2();//bai cua TQB
int main () {
    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--) {
    //     testCase();
    //     cout << endl;
        
    // }


    testCase();
}
void testCase() {
    string s;
    cin >> s;
    regex r("[aeuioyAEUIOY]");
    for (int i = 0; i < s.size(); i++) {
        if (regex_match(s.substr(i, 1), r)) {
            s.erase(s.begin() + i);
            i--;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        char tmp = tolower(s[i]);
        cout << "." << tmp;
    }
}   
string tolower(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}
void testCase2() {

}