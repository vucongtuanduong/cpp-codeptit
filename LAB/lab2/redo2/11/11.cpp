#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    string temp;
    vector<int> v;
    stringstream ss(s);
    while(getline(ss, temp, '.')) {
        // cout << temp 
        int so = stoi(temp);
        if (so < 0 || so > 255) {
            cout << "NO";
            return;
        }
        v.push_back(so);
    }
    if (v.size() != 4) {
        cout << "NO";
        return;
    } else {
        cout << "YES";
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}