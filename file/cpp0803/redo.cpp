#include <iostream>
#include <fstream>
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
    fstream f1;
    f1.open("DATA.in");
    map<int, int> m;
    while (true) {
        
        int temp;
        f1 >> temp;
        if (f1.eof()) {
            break;
        }
        m[temp]++;
    }
    for (auto x : m) {
        cout << x.first << " " << x.second << endl;
    }
    f1.close();
}