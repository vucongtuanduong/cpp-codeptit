#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int check(string s) {
    if (s.size() >= 10) {
        return 0;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            return 0;
        }
    }
    return 1;
}
int main  () {
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fstream file;
    file.open("DATA.in");
    string s;
    long long res = 0;
    string temp;

    while (getline(file, s)) {
        stringstream ss(s);
        while (ss >> temp) {
            if (check(temp)) {
                res += stoi(temp);
            }

        }
    }
    cout << res;
}