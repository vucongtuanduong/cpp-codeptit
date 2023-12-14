#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
    }
    int sum = 0;
    map<int,int> index;
    int len = 0;
    index[0] = -1;
    int startIndex = -1;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        cout << "sum: " << sum;
        if (index.find(sum) != index.end()) {
            cout << ", index[sum]: " << index[sum] << endl;
            if (len < i - index[sum]) {
                len = i - index[sum];
                startIndex = index[sum] + 1;
            }
        } else {
            index[sum] = i;
        }
    }
    if ( startIndex == -1) {
        cout << "NOT FOUND";
        return;
    }
    for (int i = startIndex; i < startIndex + len; i++) {
        cout << a[i] << " ";
    }
    
}
int main () {
    freopen("input.txt", "r", stdin);
    testCase();
}