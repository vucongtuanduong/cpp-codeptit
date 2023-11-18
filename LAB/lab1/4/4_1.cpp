#include <iostream>

using namespace std;
void testCase();
string minChange(string s);
string maxChange(string s);

void testCase() {
    string s1,s2;
    cin >> s1 >> s2;
    long long min = stoll(minChange(s1)) + stoll(minChange(s2));
    long long max = stoll(maxChange(s1)) + stoll(maxChange(s2));
    cout << min << " " << max;
}
string minChange(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '6') {
            s[i] = '5';
        }
    }
    return s;
}
string maxChange(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '5') {
            s[i] = '6';
        }
    }
    return s;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}