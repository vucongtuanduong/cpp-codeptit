#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
void testCase();

int main () {
    int t;
    cin >> t;
    while(t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    
    int n,x ;
    cin >> n >> x;
    int a[n];
    multimap<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m.insert({abs(x - a[i]), a[i]});
    }
    for (auto x:m) {
        cout << x.second << " ";
    }
}
