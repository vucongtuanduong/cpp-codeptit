#include <bits/stdc++.h>
using namespace std;
void testCase() {
    
    string s;
    cin >> s;
    unordered_map<char,int> mp;
    int n = s.size();
    int i = 0;
    while (i < n) {
        
        if (isalpha(s[i])) {
            char temp = s[i];
            i++;
            int count = 1;
            while (s[i] == temp) {
                count++;
                i++;
            }
            cout << temp << count;
        } else {
            i++;
        }
    }
    
}
int main () {
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    testCase();
}