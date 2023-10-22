#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
using namespace std;
void testCase();
int main (){
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    fstream file;
    file.open("DATA.in");
    int n, m;
    file >> n >> m;
    int a[n];
    int b[m];
    map<int, int> mp;
    set<int> s1,s2;
    for (int i = 0; i < n; i++) {
        file >> a[i];
        s1.insert(a[i]);
    }
    
    for (int i = 0; i < m; i++) {
        file >> b[i];
        s2.insert(b[i]);
    }
    for (auto x : s1) {
        mp[x]++;
    }
    for (auto x : s2) {
        mp[x]++;
    }
    for (auto x : mp) {
        if (x.second >= 2) {
            cout << x.first << " ";
        }
    }


}
