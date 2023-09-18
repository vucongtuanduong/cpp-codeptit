#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
void testCase();
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    vector<string> res;
    string s, temp;
    getline(cin , s);
    stringstream ss(s);
    while (ss >> temp) {
        res.push_back(temp);
    }
    for (int i = res.size() - 1; i >= 0; i --) {
        cout << res[i] << " ";
    }
}