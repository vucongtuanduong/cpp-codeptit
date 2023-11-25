#include <iostream>
#include <map>
using namespace std;
void testCase();


void testCase() {
    string s;
    int n;
    cin >> s >> n;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        map<char,int> m;
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