#include <bits/stdc++.h>
using namespace std;
class Club{
    public:
        string name;
        int goals;
};
bool cmp(Club a, Club b) {
    if (a.goals == b.goals) {
        return a.name < b.name;
    }
    return a.goals > b.goals;
}
void testCase() {
    string s;
    vector<string> v;
    vector<Club> res;
    map<string, int> mp;
    while (getline(cin, s)) {
        stringstream ss(s);
        string temp;
        vector<string> vTemp;
        while (getline(ss, temp, '-')) {
            vTemp.push_back(temp);
        }
        string c1 = vTemp[0];
        string c2 = vTemp[1];
        
        stringstream ss1(c1);
        string temp1, temp2;
        string club1 = "", club2 = "";
        vector<string> clb1;
        while (ss1 >> temp1) {
            clb1.push_back(temp1);
        }
        for (int i = 0; i < clb1.size() - 1; i++) {
            club1 += clb1[i] + " ";
        }
        mp[club1] += stoi(clb1[clb1.size() - 1]);

        bool ok = false;
        stringstream ss2(c2);
        int banthang2;
        while (ss2 >> temp2) {
            if (ok == true) {
                club2 += temp2 + " ";
            }
            if (ok == false) {
                banthang2 = stoi(temp2);
                ok = true;
            }
            
        }
        mp[club2] += banthang2;

    }
    for (auto x : mp) {
        Club a;
        a.name = x.first;
        a.goals = x.second;
        res.push_back(a);
    }
    sort(res.begin(), res.end(), cmp);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i].name << res[i].goals << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);
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