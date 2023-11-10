#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
char tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}
string standard(string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}
bool cmp(string a, string b) {
    return a < b;
}
int main ( ){
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream file;
    file.open("VANBAN.in");
    string s;
    string temp;
    map<string, int> resMap;
    vector<string> v;
    while (getline(file, s)) {
        stringstream ss(s);
        while (ss >> temp) {
            temp = standard(temp);
            resMap[temp]++;
        }
    }
    for (auto x: resMap) {
        v.push_back(x.first);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        cout << x << endl;
    }
    file.close();
}