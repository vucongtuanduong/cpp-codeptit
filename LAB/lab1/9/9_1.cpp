#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void testCase();
int countWord(string s) {
    int res = 0;
    stringstream ss(s);
    string temp;
    while (ss >> temp) {
        res++;
    }
    return res;
}

void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    string s;
    while (getline(cin, s)) {
        v.push_back(s);
    }

    vector<int> res;
    int i = 0;
    int count7 = 0;
    bool is68 = false;
    bool is7 = true;
    while (i < v.size()) {
        if (countWord(v[i]) == 6 || countWord(v[i]) == 8) {
            is68 = true;
        }
        if (countWord(v[i]) == 7 ) {
            if (is68 == true) {
                is68 = false;
                res.push_back(1);
            }
            count7++;
            if (count7 == 4) {
                res.push_back(2);
                count7 = 0;
            }
        }
        i++;
    }
    cout << res.size() << endl;
    for (auto x : res) {
        cout << x << endl;
    }
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
    return 0;
}