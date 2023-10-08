#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
    
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    map<string,int> m;
    vector<vector<string>> v;
    for (int i = 0; i < n; i++) {
        string s, temp;
        getline(cin, s);
        stringstream ss(s);
        vector<string> a;
        while (ss >> temp) {
            a.push_back(temp);
        }
        v.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        if (v[i][3] == "IN") {
            if (v[i][1] == "Xe_con") {
                if (v[i][2] == "5") {
                    m[v[i][4]] += 10000;
                } else {
                    m[v[i][4]] += 15000;
                }
            } else if (v[i][1] == "Xe_tai") {
                m[v[i][4]] += 20000;
            } else if (v[i][1] == "Xe_khach") {
                if (v[i][2] == "29") {
                    m[v[i][4]] += 50000;
                } else {
                    m[v[i][4]] += 70000;
                }
            }
        }
        
    }
    for (auto x : m) {
        cout << x.first << ": " << x.second << endl;
    }
}
