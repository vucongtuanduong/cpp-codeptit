#include <iostream>
#include <map>
using namespace std;
void testCase();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    map<int, int> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
    }
    for (int i = 0; i < n; i++) {
        m[a[i]]++;
        if (m[a[i]] == 2) {
            cout << a[i];
            return;
        }
    }
    cout << "-1";
}