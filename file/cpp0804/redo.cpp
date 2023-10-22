#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;
void testCase();
string tolower(string s) ; 
int main () {
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    testCase();

}
void testCase() {
    fstream file;
    file.open("VANBAN.in");
    map<string, int> m;
    while (true) {
        if (file.eof()) {
            break;
        }
        string input;
        file >> input;
        
        string temp;
        stringstream ss(input);
        while (ss >> temp) {
            temp = tolower(temp);
            m[temp]++;
        }
    }
    for (auto x :m) {
        cout << x.first << endl;
    }
    file.close();
}
string tolower(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}