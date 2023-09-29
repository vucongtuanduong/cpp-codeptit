#include <iostream>
#include <map>
#include <climits>
#include <string>
using namespace std;
void testCase();
int implement(string a, string b);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    #endif
    // int t;
    // cin >> t;
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}
void testCase() {
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'A') {
            s[i] = 'A';
            count++;
        }
        if (s[i - 1] == 'B' && s[i] == 'A' && s[i + 1] == 'B') {
            s[i] = 'B';
            count++;
        }
    }
    if (s[0] == 'A' && s[1] == 'B') {
        s[0] = 'B';
        count++;
    }
    // if (s[0] == 'B' && s[1] == 'A') {
    //     s[0] = 'A';
    //     count++;
    // }

    //ca 2 cai tren deu duoc

    // if (s[n - 2] == 'B' && s[n - 1] == 'A') {
    //     s[n - 1] = 'B';
    //     count++;
    // }


    if (s[n - 2] == 'A' && s[n - 1] == 'B') {
        s[n - 1] = 'A';
        count++;
    }
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            count++;
        }
    }
    if (s[0] == 'A' && s[n - 1] == 'B') {
        count++;
    }
    if (s[0] == 'B' && s[n - 1] == 'B') {
        count++;
    }
    cout << count;
}
