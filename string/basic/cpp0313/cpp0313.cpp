#include <bits/stdc++.h>
using namespace std;
void testCase();

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
    string input;
    string dest;
    getline(cin, input);
    getline(cin, dest);
    string tmp;
    stringstream ss(input);
    while (ss >> tmp) {
        if (tmp != dest) {
            cout << tmp << " ";
        }
    }
}

void testCase2() {

}