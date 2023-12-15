#include <bits/stdc++.h>
using namespace std;
string init(string a, string b) {
    map<char,int> mp;
    int count = 0;
    for (int i = 0; i < b.size(); i++) {
        if (mp[b[i]] == 0){
            count++;
        }
        mp[b[i]]++;
    }
    int len = INT_MAX;
    int startIndex= 0;
    int j = 0;
    for(int i = 0; i < a.size(); i++) {
        mp[a[i]]--;
        if (mp[a[i]] == 0) {
            count--;
        }
        if (count == 0) {
            while (count == 0) {
                if (i - j + 1 < len) {
                    len = i - j + 1;
                    startIndex = j;
                }
                mp[a[j]]++;
                if (mp[a[j]] > 0) {
                    count++;
                }
                j++;
            }
        }
    }
    if (len == INT_MAX) {
        return "-1";
    } else {
        return a.substr(startIndex, len);
    }

}
void testCase() {
    string a,b;
    cin >> a >> b;
    cout << init(a, b);
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}