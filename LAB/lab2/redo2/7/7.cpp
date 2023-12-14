#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string &s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}
string chuanhoa1(string &s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    return s;
}
void testCase() {
    string s = "";
    vector<string> v;
    while (getline(cin, s)) {
        // cout << "s: " << s << endl;
        string temp = "";
        string delimiter = "";
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '.' || s[i] == '!' || s[i] == '?') {
                delimiter = s[i];
                stringstream ss(temp);
                string temp2;
                string res = "";
                while (ss >> temp2) {
                    temp2 = chuanhoa(temp2);
                    res += temp2 + " ";
                }
                res.pop_back();
                // cout << "Temp: " << temp << endl;
                temp = "";
                res = res + delimiter;
                res[0] = toupper(res[0]);
                v.push_back(res);
            } else {
                temp += s[i];
                if (i == s.size() - 1) {
                    stringstream ss(temp);
                    string temp2;
                    string res = "";
                    while (ss >> temp2) {
                        temp2 = chuanhoa(temp2);
                        res += temp2 + " ";
                    }
                    res.pop_back();
                    // cout << "Temp: " << temp << endl;
                    temp = "";
                    res = res + ".";
                    res[0] = toupper(res[0]);

                    v.push_back(res);
                }
            }

        }
    }
    for (auto x : v) {
        cout << x << endl;
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
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