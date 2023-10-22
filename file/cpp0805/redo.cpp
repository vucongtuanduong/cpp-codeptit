#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
using namespace std;
string tolower(string s);
void testCase();
int main (){
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    fstream f1, f2;
    f1.open("DATA1.in");
    f2.open("DATA2.in");
    map<string, int> inter;
    map<string, int> sub;
    map<string, int> m1, m2;
    string input1, temp, input2;
    set<string> s1, s2;
    while (!f1.eof()) {
        f1 >> input1;
        stringstream ss1(input1);
        while (ss1 >> temp) {
            temp = tolower(temp);
            s1.insert(temp);
        }
    }
    while(!f2.eof()) {
        f2 >> input2;
        stringstream ss2(input2);
        while(ss2 >> temp) {
            temp = tolower(temp);
            s2.insert(temp);
        }
    }
    for (auto x : s1) {
        m1[x]++;
    }
    for (auto x : s2) {
        m1[x]++;
    }
    for (auto x: m1) {
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : m1) {
        if (x.second >= 2) {
            cout << x.first << " ";
        }
    }
}
string tolower(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}