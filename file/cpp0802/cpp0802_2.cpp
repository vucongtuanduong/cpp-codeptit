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
    while (in >> s) {
        if (s.size() >= 10) {
            continue;
        }
        if (isValid(s)) {
            res += stoi(s);
        } 
    }
    cout << res ;
    in.close();
    // out.close();
}
int main () {


    testCase();
}