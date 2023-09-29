#include <iostream>
#include <climits>
#include <map>
using namespace std;
void testCase();
string init(string a, string b);
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
void testCase(){ 
    string a, b;
    cin >> a >> b;
    cout << init(a, b) ;
}
string init(string a, string b) {
    // int m[1000] = {0};
    map<char,int> m;
    int count = 0;
    int x = 0;
    int min = INT_MAX;
    for (int i = 0; i < b.length(); i++) {
        if (m[b[i]] == 0) {
            count++;
        }
        m[b[i]]++;
    }
    int j = 0;
    for (int i = 0; i < a.size(); i++) {
        m[a[i]]--;
        if (m[a[i]] == 0) {
            count--;
        }
        if (count == 0) {
            while (count == 0) {
                if (min > i - j + 1) {
                    min = i - j + 1;
                    x = j;
                }
                m[a[j]]++;
                if (m[a[j]] > 0) {
                    count++;
                }
                j++;
            }
        }
    }
    if (min == INT_MAX) {
        return "-1";
    } else {
        return a.substr(x, min);
    }
}