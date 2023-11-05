#include <iostream>
using namespace std;
void testCase( );
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
void testCase( ) {
    string s;
    cin >> s;
    // cout << s << endl;
    string res, temp;
    int n  = s.size();
    int j = 0;
    int i = 0;
    for (i = 0; i < n; i++) {
        j = i;
        temp = "";
        while (s[j] != '.' && j < n) {
            temp += s[j];
            j++;
            // cout << temp << endl;
        }
        // cout << temp << endl;
        i = j;
        int x = stoi(temp);
        if (x < 0 || x > 255) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}