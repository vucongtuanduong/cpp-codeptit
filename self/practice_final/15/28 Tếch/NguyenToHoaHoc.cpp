#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cstring>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)
#define MOD (long long) (1000000007)
using namespace std;

int main() {
    map<string, int> mp;
    for (int i = 1; i <= 10; i++) {
        string s;
        int n;
        cin >> s >> n;
        mp[s] = n;
    }
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int i = 0;
        int ntk = 0;
        while (i < s.length()) {
            string nt = "";
            while (isalpha(s[i]) && i < s.length()) {
                nt = nt + s[i];
                i++;
            }
            string sl = "";
            while (isdigit(s[i]) && i < s.length()) {
                sl = sl + s[i];
                i++;
            }
            ntk = ntk + mp[nt] * stoi(sl);
        }
        cout << ntk << endl;
    }
    return 0;
}