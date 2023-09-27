#include <iostream>
#include <map>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
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
    
    int res = 0;
    for (int i =0 ;i  < s.size(); i++) {
        map<char, int> m;
        int j = i;
        while (j < s.size() && m.size() <= n) {
            m[s[j]]++;
            
            j++;
            if (m.size() == n) {
                res++;
            }
        }
    }
    cout << res;
}