#include <iostream>
#include <fstream>
#include <set>
#include <map>
using namespace std;
void testCase();
int main () {
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
    set<int> se1, se2;
    map<int,int> ma;
    for (int i = 0; i < n; i++) {
        file >> a[i];
        se1.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        file >> b[i];
        se2.insert(b[i]);
    }
    for (auto x : se1) {
        ma[x]++;
    }
    for (auto x : se2) {
        ma[x]++;
    }
    for (auto x : ma) {
        if (x.second > 1) {
            cout << x.first << " ";
        }
    }
    file.close();
}