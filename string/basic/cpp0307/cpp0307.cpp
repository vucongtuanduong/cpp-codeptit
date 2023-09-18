#include <iostream>
#include <map>
#include <sstream>
using namespace std;
void testCase();
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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<string, int> m1;
    stringstream ss2(s2);
    string tmp2;
    while(ss2 >> tmp2) {
        m1[tmp2] = 1;
    }
    stringstream ss1(s1);
    string tmp1;
    map<string, int> m2;
    while(ss1 >> tmp1) {
        if (m1[tmp1] == 0) {
            m2[tmp1]++;
        }
    }
    for (auto x:m2) {
        cout << x.first << " ";
    }
}