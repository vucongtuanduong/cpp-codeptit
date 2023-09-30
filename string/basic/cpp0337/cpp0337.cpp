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
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string a, b = "";
    cin >> a;
    map<char,int> m;
    for (int i = 0; i < a.size(); i++) {
        m[a[i]]++;
    }
    for (auto x : m) {
        b += x.first;
    }
    cout << implement(a,b);
}
int implement(string a, string b) {
    int j = 0;
    int min = INT_MAX;
    int count = 0;
    map<char,int> m;
    for (int i = 0; i < b.size(); i++) {
        if (m[b[i]] == 0) {
            count++;
        }
        m[b[i]]++;
    }
    for (int i = 0; i < a.size(); i++) {
        m[a[i]]--;
        if (m[a[i]] == 0) {
            count--;
        }
        if (count == 0) {
            while (count == 0) {
                if (min > (i - j + 1)) {
                    min = i - j + 1;
                }
                m[a[j]]++;
                if (m[a[j]] > 0) {
                    count++;
                }
                j++;
            }
        }
        
    }
    return min;
}