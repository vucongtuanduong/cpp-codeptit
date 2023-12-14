#include <bits/stdc++.h>
using namespace std;
class MucLuc{
    public:
        string level = "";
        int numLevel;
        int page;
        string content;
};
bool cmp(MucLuc a, MucLuc b) {
    if (a.page == b.page) {
        return a.level < b.level;
    }
    return a.page < b.page;
}
void testCase() {
    string s;
    vector<string> data;
    while (getline(cin, s)) {
        data.push_back(s);
    }
    string trang, currLevel, noidung;
    int i = 0;
    vector<MucLuc> res;
    while (i < data.size()) {
        if (data[i].find("Page") != -1) {
            trang = data[i][data[i].size() - 1];
            i++;
        } 
        if (data[i].find("Level") != -1) {
            string temp = data[i];
            string temp1;
            stringstream ss(temp);
            string temp2;
            vector<string> tempV;
            while(getline(ss,temp1, ':')) {
                
                noidung = temp1;
                tempV.push_back(temp1);
            }
            currLevel = tempV[0][tempV[0].size() -1];
            noidung.erase(0,1);
            MucLuc a;
            a.numLevel = stoi(currLevel);
            a.page = stoi(trang);
            a.content = noidung;
            for (int i = 0; i < a.numLevel; i++) {
                a.level += ">";
            }
            res.push_back(a);
        }
        i++;
    }
    sort(res.begin(), res.end(), cmp);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i].level << res[i].content << "--- " << res[i].page << endl;
    }
}
int main () {
    freopen("VANBAN.txt", "r", stdin);

    testCase();
}