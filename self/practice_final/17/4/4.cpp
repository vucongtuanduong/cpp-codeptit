#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    getline(cin, s);
    vector<long long> res;
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
            long long temp = stoll(tempSo);
            res.push_back(temp);
        }
        
        i++;
    }
    sort(res.begin(), res.end());
    cout << res[res.size() - 1] << endl;

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}