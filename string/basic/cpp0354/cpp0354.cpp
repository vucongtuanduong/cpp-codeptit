#include <bits/stdc++.h>
using namespace std;
void testCase();

void testCase2();//bai cua TQB
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
        
    }


    // testCase();
}
void testCase() {
    string s;
    cin >> s;
    map<char,int> m;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] >= 1) {
            cout << s[i] << m[s[i]];
            m[s[i]] = 0;
        }
    }
}   

void testCase2() {

}