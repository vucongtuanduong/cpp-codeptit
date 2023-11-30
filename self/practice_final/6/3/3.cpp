#include <bits/stdc++.h>
using namespace std;

void testCase();

//explicit

void testCase() {
    int m, s;
    cin >> m >> s;
    string min = "", max = "";
    if (m == 0 || s < 1|| s > 9 * m) {
        cout << "-1 -1";
        return;
    } 
    while (m--) {
        if (s > 9) {
            max += '9';
            s -= 9;
        } else {
            max += to_string(s);
            s = 0;
        }
    }
    
    min = max;
    reverse(min.begin(), min.end());
    if (min[0] == '0') {
        // cout << "enter!" << endl;
        int index = 0;
        while (min[index] == '0') {
            index++;
        }
        min[0] = '1';
        min[index] = min[index] - 1;
    }
    cout << min << " " << max ;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}