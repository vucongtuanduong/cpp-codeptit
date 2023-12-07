#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp) {
        v.push_back(temp);
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
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