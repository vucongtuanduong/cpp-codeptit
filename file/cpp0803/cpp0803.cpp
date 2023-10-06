#include <iostream>
#include <fstream>
#include <map>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream file;
    file.open("DATA.in");
    map<int, int> m;
    while (1) {
        int x;
        file >> x;
        if (file.eof()) {
            break;
        }
        m[x]++;
        
    }
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    file.close();
}