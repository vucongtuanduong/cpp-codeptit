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
    int n;
    cin >> n;
    set<char> se;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            se.insert(s[i]);
        }
    }
    for (auto x: se) {
        cout << x << " ";
    }
    
}   

void testCase2() {

}