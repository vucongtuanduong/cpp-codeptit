#include <iostream>
using namespace std;
void testCase();
void standard(string &s) {
    string tmp1 = "+84";
    
    int i1 = s.find(tmp1);
    
    if (i1 != -1) {
        s.erase(i1, tmp1.size());
        s = "0" + s;
    } 
    if (s[0] == '8' && s[1] == '4') {
        s.erase(0, 2);
        s = "0" + s;
    }
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '-' || s[i] == '.' || s[i] == ' '){
            s.erase(i, 1);
        }
        i++;
    }
    
}

void testCase() {
    string s;
    getline(cin, s);
    standard(s);
    cout << s;

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}