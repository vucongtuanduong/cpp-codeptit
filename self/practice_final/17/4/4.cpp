#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    } 
    return a.size() < b.size();
}
void testCase() {
    string s;
    getline(cin, s);
    vector<string> res;
    string tempSo = "";
    int i = 0;
    while (i < s.size()) {
        string tempSo = "";
        while (isdigit(s[i])) {
            tempSo += s[i];
            i++;
        }
        // cout << tempSo << endl;
        if (tempSo != "") {
            int j = 0;
            while (tempSo[j] == '0') {
                tempSo.erase(0, 1);
            }
            if (tempSo == "") {
                res.push_back("0");
            } else {
                res.push_back(tempSo);
            }
            
        }
        
        i++;
    }
    sort(res.begin(), res.end(), cmp);
    cout << res[res.size() - 1] << endl;

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}