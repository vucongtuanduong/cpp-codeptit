//cpp08007
#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <sstream>
using namespace std;
int main  (){ 
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream file;
    file.open("DATA.in");
    int n, m;
    string s,temp;
    set<int>s1,s2;
    map<int,int> m1,m2;
    file >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        file >> x;
        s1.insert(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        file >> x;
        s2.insert(x);
    }
    for (auto t: s1) {
        m1[t]++;
    }
    for (auto t: s2) {
        if (m1[t] == 1) {
            m2[t]++;
        }

    }
    for (auto t: m2) {
        cout << t.first << " ";
    }
}