#include <bits/stdc++.h>
using namespace std;
int countWords(string s) {
    string temp;
    int count = 0;
    stringstream ss(s);
    while (ss >> temp) {
        count++;
    }
    return count;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    vector<int> v;
    string s;
    for (int i = 0;  i < n; i++) {
        getline(cin, s);
        v.push_back(countWords(s));
    }
    vector<int> res;
    bool ok = 0;
    int i = 0;
    while (i < v.size()) {
        if (v[i] == 6) {
            if (ok == 0) {
                ok = 1;
                res.push_back(1);
                
            }
            i += 2;
        } else {
            ok = 0;
            res.push_back(2);
            i += 4; 

            
        }
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
 
}