#include <iostream>
#include <fstream>
using namespace std;
void testCase();
int check(string s) {
    if (s.size() > 10) {
        return 0;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < '0'  || s[i] > '9') {
            return 0;
        }
    }
    return 1;
}
int main () {
    testCase();
}
void testCase() {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    fstream f1;
    long long sum = 0;
    f1.open("DATA.in");
    while(1) {
        string s;
        f1 >> s;
        if (f1.eof()) {
            break;
        }
        if (check(s)) {
            sum += stoi(s);
        }
        

       
    }
    cout << sum;
    f1.close();
}