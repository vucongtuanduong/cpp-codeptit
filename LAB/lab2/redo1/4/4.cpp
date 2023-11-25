//notifications
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void testCase();


void testCase() {
    string s;
    getline(cin, s);
    if (s.length() < 100) {
        cout << s;
        return;
    }
    s += " ";
    int i = 0;
    int count = 0;
    string temp = "";
    while (i < 100) {
        temp += s[i];
        i++;
    }
    if (s[99] != ' ' && s[100] != ' ') {
        int j = 99;
        while (s[j] != ' ') {
            temp.pop_back();
            j--;
        }
    }
    cout << temp ;
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
    // testCase();
}