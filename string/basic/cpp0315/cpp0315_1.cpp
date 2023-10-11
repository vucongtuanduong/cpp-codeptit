#include <iostream>
using namespace std;
void testCase();
int main ( ){
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
    int n = s.size();
    int i = s.size() - 2;
    int j = s.size() - 1;
    while (s[i] <= s[i + 1]) {
        i--;
    }
    if (i < 0) {
        cout << "-1";
        return;
    }
    while (s[j] >= s[i]) {
        j--;
    }
    while (s[j] == s[j - 1]) {
        j--;
    }
    swap(s[i], s[j]);
    cout << s;
}