#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    for (int i = 0; i <s.size(); i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}
void testCase() {
    ifstream in("DATA.in");
    // ofstream out("PTIT.out");
    string s;
    long long res = 0;
    map<int,int> mp;
    while (in >> s) {
        mp[stoi(s)]++;
    }
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    in.close();
    // out.close();
}
int main () {


    testCase();
}