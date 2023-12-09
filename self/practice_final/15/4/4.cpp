#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n = 10;
    map<string, int> mp;
    while (n--) {
        string s;
        int kl;
        cin >> s >> kl;
        mp[s] = kl;
    }
    // for (auto x : mp) {
    //     cout << x.first << " " << x.second << endl;
    // }
    int t;
    cin >> t;
    while (t--) {
        // cout << "test1: \n";
        string chat;
        cin >> chat;
        string temp = "";
        string tempSo = "";
        int res  = 0;
        map<string,int> chatMap;
        string tempChat;
        for (int i = 0; i < chat.size(); i++){
            if (chat[i] < '0' || chat[i] > '9') {
                temp += chat[i];
                if (tempSo != "") {
                    int so = stoi(tempSo);
                    tempSo = "";
                    // cout << so << endl;
                    res += mp[tempChat] * so;
                }
                

            } else {
                tempSo += chat[i];
                tempChat = temp;
                if (i == chat.size() - 1) {
                    int so = stoi(tempSo);
                    tempSo  = "";
                    res += mp[tempChat] * so;
                }
                // cout << tempChat << endl;
                temp = "";
            }
        }
        cout << res  << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}