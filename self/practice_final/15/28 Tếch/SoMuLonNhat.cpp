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
    long long n;
    cin >> n;

    map<long long, long long> mp;
    long long cntMax = 0;
    long long r = 0;

    for (long long i = 2; i <= trunc(sqrt(n)); i++) {
        if (n % i == 0) {
            ll cnt = 0;
            while (n % i == 0) {
                n = n / i;
                cnt++;
            }
            mp[i] = cnt;
            if (cnt > cntMax) {
                cntMax = cnt;
                r = i;
            }
            else if (cnt == cntMax) {
                r = min(r, i);
            }
        }
    }

    if (n > 1) {
        mp[n] = 1;
        if (1 > cntMax) {
            r = n;
        }
        else if (1 == cntMax) {
            r = min(r, n);
        }
    }

    cout << r << " " << mp[r] << endl;


    return 0;
}