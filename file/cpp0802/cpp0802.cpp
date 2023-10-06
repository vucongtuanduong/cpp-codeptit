#include <iostream>
#include <fstream>
using namespace std;
int check(string s) {
    int n = s.size();
    if (n > 10) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return 0;
        }
    }
    return 1;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream file;
    long long res = 0;
    file.open("DATA.in");

    while (1) {
        string s;
        file >> s;
        if (file.eof()) {
            break;
        }
        if (check(s)) {
            res += stoi(s);
        }
        
    }
    cout << res;
    file.close();
}