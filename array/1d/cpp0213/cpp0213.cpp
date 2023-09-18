#include <iostream>
#include <map>
#include <vector>
using namespace std;
long long fibo[92];
map<long long, int> m;
void testCase();
void init();

int main () {
    int t;
    cin >> t;
    init();
    while(t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> sub;
    for (int i = 0; i < n; i++) {
        if (m[a[i]] >= 1) {
            sub.push_back(a[i]);
        }
    }
    for (auto x: sub) {
        cout << x << " ";
    }

}
void init() {
    fibo[0] = 0;
    m[0]++;
    
    fibo[1] = 1;
    m[1]++;
    for (int i = 2; i < 92; i++) {
        fibo[i] = fibo[i - 1]  + fibo[i - 2];
        m[fibo[i]]++;
    }
}