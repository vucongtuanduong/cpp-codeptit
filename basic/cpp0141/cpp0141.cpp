#include <iostream>
#include <map>
using namespace std;
long long f[92];
map <long long, int> m;
void testCase();
void init();

int main () {
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    long long n;
    cin >> n;
    if (m[n] >= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
void init() {
    f[0] = 0;
    m[f[0]]++;
    f[1] = 1;
    m[f[1]]++;
    for (int i = 2; i < 92; i++) {
        f[i] = f[i - 1] + f[i - 2];
        m[f[i]]++;
    }
}
