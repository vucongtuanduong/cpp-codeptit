#include <iostream>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;
void testCase();


void testCase() {
    int n;
    cin >> n;
    int *a = new int[n];
    map<int, int> m;
    map<int,int> index;
    for (int i =0 ; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
        if (m[a[i]] > 1) {
            index[i] = a[i];
        }
    }

    if (index.size() == 0) {
        cout << "NO";
    } else {
        for (int i = 0; i < n; i++) {
            if (m[a[i]] > 1) {
                cout << a[i];
                break;
            }
        }
    }
    
}
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
    return 0;
}