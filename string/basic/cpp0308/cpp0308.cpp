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
}
void testCase() {
    string input;
    cin >> input;
    map<char, int>m;
    vector<char>s;
    for (int i = 0 ; i < input.size(); i++) {
        char x = input[i];
        m[x]++;
    }
    for (int i = 0; i < input.size(); i++) {
        if (m[input[i]]== 1) {
            cout << input[i];
        }
    }
    // s = std::unique(s.begin(), s.end());
    // for (auto x:s) {
    //     cout << x;
    // }
}

void testCase2() {
    
}