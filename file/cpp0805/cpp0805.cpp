#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;
string tolower(string s) {
    for (int i = 0; i < s.size() ;i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}
void testCase() ;
void testCase1() ;
void testCase2() ;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout); 
    #endif
    testCase2();
}
void testCase() {
    fstream file;
    file.open("DATA1.in");
    map<string,int> m1, m2;
    while (!file.eof()) {
        string s;
        file >> s;
        s = tolower(s);
        m1[s]++;
    }
    file.close();
    file.open("DATA2.in");
    while (!file.eof()) {
        string s;
        file >> s;
        s = tolower(s);
        if (m1[s] >= 1) {
            m2[s]++;
        }
        m1[s]++;
        
    }
    for (auto x : m1) {
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : m2) {
        cout << x.first << " ";
    }
}
void testCase1() {
    set<string> s1, s2;
    string s;
    fstream file;
    file.open("DATA1.in");
    while (!file.eof()) {
        file >> s;
        s = tolower(s);
        s1.insert(s);
    }
    file.close();
    file.open("DATA2.in");
    while (!file.eof()) {
        file >> s;
        s = tolower(s);
        s2.insert(s);
        s1.insert(s);
    }
    for (auto x : s1) {
        cout << x << " ";
    }
    cout << endl;
    for (auto x = s1.begin(); x != s1.end(); x++) {
        if (s2.find(*x) != s2.end()) {
            cout << *x << " ";
        }
    }
}
void testCase2() {
    fstream file;
    file.open("DATA1.in");
    map<string,int> m1, m2;
    set<string> se1, se2;
    while (!file.eof()) {
        string s;
        
        file >> s;
        s = tolower(s);
        se1.insert(s);

    }
    file.close();
    file.open("DATA2.in");
    while (!file.eof()) {
        string s;
        file >> s;
        s = tolower(s);
        se2.insert(s);
        
    }
    for (auto x : se1) {
        m1[x]++;
    }
    for (auto x : se2) {
        m1[x]++;
    }
    for (auto x : m1) {
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : m1) {
        if (x.second > 1) {
            cout << x.first << " ";
        }
    }
}