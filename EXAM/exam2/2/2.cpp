#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;
string standard(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        } 
    }
    return s;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream file;
    file.open("VANBAN.in");
    map<string, int> m;
    string s;
    string temp;
    while (getline(file, s)) {
        stringstream ss(s);
        while (ss >> temp) {
            temp = standard(temp);
            m[temp]++;
        }
    }
    for (auto i : m) {
        cout << i.first  << endl;
    }
}