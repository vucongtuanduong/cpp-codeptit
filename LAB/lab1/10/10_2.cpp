#include <bits/stdc++.h>

using namespace std;
void testCase2() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    bool isTopic = true;
    string topic;
    map<string,int> mp;
    while (n--) {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }
    int i = 0;
    while (i < v.size()) {
        if (v[i] == "") {
            isTopic = true;
            i++;
            
        }
        if (isTopic == true) {
            topic = v[i];
            // cout << "topic: " << topic << endl;
            isTopic = false;
            i++;
        }    
        if (isTopic == false) {
            // cout << "content: " << v[i] << endl;
            mp[topic]++;
            i++;
        } 
        
    }
    for (auto x : mp) {
        cout << x.first << ": " << x.second << endl;
    }
}
void testCase() {
    vector<string> v;
    int n;
    string s;
    while (getline(cin, s)) {
        v.push_back(s);
    }
    n = stoi(v[0]);
    bool ok = 1;
    string topic;
    map< string,int> mp;
    int i = 1;
    while(i < v.size()) {
        if (v[i] == "") {
            i++;
            ok = 1;
        } 
        if (ok == 1) {
            topic = v[i];
            ok = 0;
            i++;
        }
        if (v[i] != "") {
            mp[topic]++;
        }
        i++;
    }
    for (auto x : mp) {
        cout << x.first << ": " << x.second << endl;
    }
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase2();
    return 0;
}