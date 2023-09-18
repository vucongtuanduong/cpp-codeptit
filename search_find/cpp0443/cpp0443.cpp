#include <iostream>
#include <map>
using namespace std;
void testCase();
void testCase2();
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
    int a[n - 1];
    map<int, int> m;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        // cout << a[i] << endl;
        m[a[i]]++;

    }
    for (int i = 0; i < n - 1; i++) {
        // cout << i + 1 << " " << m[i  + 1 ] << endl;
        
        if (m[i + 1] < 1) {
            cout << i + 1;
            return;
        }
    }
}
void testCase2() {
    int n; cin>>n;
    int a[n-1];
    map<int,int> mp;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        mp[a[i]]+=1;
    }
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            cout<<i<<endl;
            break;
        }
    }
}