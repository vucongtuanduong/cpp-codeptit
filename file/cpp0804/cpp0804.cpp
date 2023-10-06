#include <iostream>
#include <map>
#include <fstream>
using namespace std;
string tolower(string s) {
    for (int i = 0; i < s.size() ;i++) {
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
    map <string, int> m;
    while (!file.eof()) {
        string s;
        file >> s;
        s = tolower(s);
        m[s]++;
    }
    for (auto x : m) {
        cout << x.first << endl;
    }
}