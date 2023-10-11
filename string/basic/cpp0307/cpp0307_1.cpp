#include <iostream>
#include <map>
#include <sstream>
using namespace std;
void testCase();
int main  (){
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
}
void testCase() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<string, int> m1, m2;
    string temp;
    stringstream ss(s2);
    while (ss >> temp) {
        m2[temp]++;
    }
    ss.clear();
    ss.str(s1);
    while (ss >> temp) {
        if (m2[temp] == 0) {
            m1[temp]++;
        }
    }
    for (auto i : m1) {
        cout << i.first << " ";
    }
}