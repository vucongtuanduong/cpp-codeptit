#include <bits/stdc++.h>
using namespace std;
void testCase();
string tolower(string temp);

//explicit
string tolower(string temp) {
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] >= 'A' && temp[i] <= 'Z') {
            temp[i] += 32;
        }
    }
    return temp;
}
void testCase() {
    map<string,int> m1, m2;
    string s, t;
    getline(cin, s);
    getline(cin, t);
    stringstream ss(t);
    string temp;
    while (ss >> temp) {
        temp = tolower(temp);
        m1[temp]++;
    }
    stringstream ss1(s);
    while (ss1 >> temp) {
        temp = tolower(temp);
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
    testCase();
    
}