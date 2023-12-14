#include <bits/stdc++.h>
using namespace std;
class Club{
    public:
        string id;
        string name;
        int diff;
        int matches;
        int points;
        friend istream &operator >> (istream &in, Club &a) {
            string rac;
            getline(in, rac);
            getline(in, a.id);
            getline(in, a.name);
            in >> a.matches >> a.diff >> a.points;
            in.ignore();
            getline(in, rac);
            return in;
        }
};
bool cmp(Club a, Club b) {
    if (a.points == b.points) {
        if (a.diff == b.diff) {
            return a.id < b.id;
        }
        return a.diff > b.diff;
    }
    return a.points > b.points;
}
void testCase() {


    string s;
    vector<Club> res;
    map<string, Club> clubMap;
    for (int i = 0; i < 20; i++) {
        Club a;
        cin >> a;
        res.push_back(a);
        clubMap[a.name] = a;
    }
    
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
        int banthang1 = stoi(clb1[clb1.size() - 1]);
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
        club1.pop_back();
        club2.pop_back();
        if (banthang1 == banthang2) {
            clubMap[club1].points ++;
            clubMap[club2].points ++;
        } else if(banthang1 > banthang2) {
            clubMap[club1].points += 3;
            clubMap[club1].diff += (banthang1 - banthang2);
            clubMap[club2].diff -= (banthang1 - banthang2);
        } else {
            clubMap[club2].points += 3;
            clubMap[club2].diff += (banthang2 - banthang1);
            clubMap[club1].diff -= (banthang2 - banthang1);
        }
        clubMap[club1].matches++;
        clubMap[club2].matches++;

    }
    vector<Club> final;
    for (auto x : clubMap) {
        Club a = x.second;
        final.push_back(a);
    }
    sort(final.begin(), final.end(), cmp);
    for (int i = 0; i < final.size(); i++) {
        cout << "#" << i + 1 << " " << final[i].id << " " << final[i].name << " " << final[i].matches << " " << final[i].diff << " " << final[i].points << endl;
        cout << "------------------\n";
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