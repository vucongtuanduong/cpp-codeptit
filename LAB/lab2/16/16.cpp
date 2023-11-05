#include <iostream>
#include <sstream>
using namespace std;
void testCase() ;
int checkValid(string s);
int checkDot(string s);
int main ( ){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    getline(cin, s);
    // cout << "'check valid: '" << checkValid(s) << endl;
    if (checkValid(s) == 0) {
        // cout << "check valid" << checkValid(s)<< endl; 
        cout << "NO";
        return;
    }
    stringstream  ss(s);
    string temp, res = "";
    string before, after;
    int count = 1;
    while (getline(ss, temp, '@')) {
        // cout << temp << endl;
        if (count == 1) {
            before = temp;
            count++;
        }
        else if (count == 2){
            after = temp;
        }
    }
    int index = s.find(before);
    after = s.substr(index + before.size() + 1, s.size() - index - before.size() - 1);
    // cout << before << endl;
    // cout << after << endl;
    if (before.size() > 64 || after.size() > 254) {
        cout << "NO";
        return;
    }
    // cout << "checkDot: " << checkDot(after) << endl;
    if (checkDot(after) == 0) {
        cout << "NO";
        return;
    
    }
    cout << "YES";
}
int checkValid(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            return 0;
        }
        if (s[i] == '@' ) {
            continue;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            continue;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            continue;
        } else if (s[i] >= '0' && s[i] <= '9') {
            continue;
        } else if (s[i] == '.' || s[i] == '_') {
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}
int checkDot(string s) {
    int countDot = 0;
    int countAlpha = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.' ) {
            countDot++;
        }
        if (s[i] == '@') {
            countAlpha++;
        }
        
    }
    if (countAlpha > 0) {
        return 0;
    }
    if (countDot == 0) {
        return 0;
    }
    return 1;
}