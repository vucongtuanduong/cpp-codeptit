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
    while (t-- ) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    cin >> s;
    long long res = 0;
    int n = s.size();
    int i = 0, j = 0;
    for (i; i < n; i++) {
        string temp = "";
        if (s[i] >= '0' && s[i] <= '9') {
            temp += s[i];
            for (j = i + 1; j < n; j++) {
                if (s[j] >= '0' && s[j] <= '9') {
                    temp += s[j];
                    i = j;
                } else {
                    break;
                }
            }
        }
        if (temp != "") {
            res = max(stoll(temp), res);;
        }
    }
    cout << res;
}