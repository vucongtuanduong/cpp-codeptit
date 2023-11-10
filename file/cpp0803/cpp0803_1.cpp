#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fstream file;
    file.open("DATA.in");
    string s;
    string temp;
    map<int,int> m;
    while (getline(file, s)) {
        stringstream ss(s);
        while (ss >> temp) {
            int n = stoi(temp);
            m[n]++;
        }
    }
    for (auto x:m) {
        cout << x.first << " " << x.second << endl;
    }
}