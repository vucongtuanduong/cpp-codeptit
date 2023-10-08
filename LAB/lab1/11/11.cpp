#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
void testCase();
long long minChange(long long x);
long long maxChange(long long x);
string bigSum(string s1, string s2);
string maxChange(string s);
string minChange(string s);
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
void testCase() {
    string s;
    getline(cin, s);
    if (s[0] == '+') {
        s.erase(0, 3);
        s.insert(0, "0");
    }
    
    if (s[0] == '8' && s[1] == '4') {
        s.erase(0,2);
        s.insert(0, "0");
    }
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            s.erase(i,1);
        }
    }
    cout << s;
}
