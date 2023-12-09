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
    long long n, d;
    cin >> n >> d;

    long long a[100001];

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long  res = 0;

    for (long long i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            long long kc = a[i - 1] - a[i];
            long long cnt = kc / d;
            a[i] = a[i] + d * (cnt + 1);
            res += cnt + 1;
        }
    }

    cout << res << endl;

    return 0;
}