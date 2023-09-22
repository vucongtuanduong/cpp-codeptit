#include <iostream>
#include <map>
using namespace std;
void testCase();
int main () {
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
    cin >> s;
    int n;
    cin >> n;
    
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        map<char , int> m;
        int j = i;
        while (m.size() <= n && j < s.size()) {
            m[s[j]] = 1;
            j++;
            if (m.size() == n) {
                ans += 1;
                // break;
            }
        }
    }
    cout << ans;
}