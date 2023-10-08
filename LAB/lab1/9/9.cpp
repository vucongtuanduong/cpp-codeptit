#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
void testCase();
int countWords(string s);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }

    testCase();
    
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    vector<int> res;
    map<int, int > m;
    vector<string> poem;
    int count7 = 0;
    bool is7 = false;
    bool is68 = false;
    while (n--) {
        string s;
        getline(cin, s);
        int count = countWords(s);
        // cout << count << endl;
        if (poem.size() == 0 && count == 6) {
            res.push_back(1);
            is68 = true;
            is7 = false;
        }
        poem.push_back(s);
        if (poem.size() > 1 && count == 6 && is7 == true) {
            res.push_back(1);
            is68 = true;
            is7 = false;
        }
        if (poem.size() > 1 && count == 7) {
            count7++;
            is7 = true;
            is68 = false;
        }
        if (count7 == 4) {
            count7 = 0;
            res.push_back(2);
        }
    }
    
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }

}
int countWords(string s) {
    int count  = 0;
    string temp;
    stringstream ss(s);
    while (ss >> temp) {
        count++;
    }
    return count;
}
