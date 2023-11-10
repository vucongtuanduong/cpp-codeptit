#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <sstream>
using namespace std;
string tolower(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}
void readFile(fstream &file, set<string> &res) {
    string s;
    string temp;
    while(getline(file, s)) {
        stringstream ss(s);
        while (ss >> temp) {
            temp = tolower(temp);
            res.insert(temp);
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fstream file1, file2;
    file1.open("DATA1.in");
    file2.open("DATA2.in");
    set<string> s1, s2;
    readFile(file1, s1);
    readFile(file2, s2);
    map<string, int> hop, giao;
    for (auto x:s1) {
        hop[x]++;
    }
    for (auto x:s2) {
        hop[x]++;
        if (hop[x] == 2) {
            giao[x]++;
        }
    }
    for (auto x: hop) {
        cout << x.first << " ";
    }
    cout << endl;

    for (auto x:giao) {
        cout << x.first << " ";
    }
}