#include <bits/stdc++.h>
using namespace std;
void testCase();

//explicit

void testCase() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<string, int> m1, m2;
    stringstream ss(s2);
    string temp;
    while (ss >> temp) {
        m1[temp]++;
    }
    stringstream ss1(s1);
    while (ss1 >> temp) {
        if (m1[temp] == 0) {
            m2[temp]++;
        }
    }
    for (auto x : m2) {
        cout << x.first << " ";
    }
    
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
}