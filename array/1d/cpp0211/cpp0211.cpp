#include <iostream>
#include <map>
#include <climits>
using namespace std;
void testCase();
void testCase2();
void testCase3();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase2();
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
    // map<int,int>max;
    int max = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] >= a[i]) {
                // int sub = a[j] - a[i];
                int temp  = j - i;
                if ( temp > index) {
                    // max = sub;
                    index = temp;
                }
            }
        }
    }
    cout << index;
}
void testCase2() {
    int n;
    cin >> n;
    int a[n], b[n + 1] = {INT_MIN};
    for (auto &x : a) cin >> x;
    for (int i = n - 1; i >=0; --i) {
        b[i] = max(b[i + 1], a[i]);
    }
    // for (int i = 0; i <= n; i++) {
    //     cout << b[i] << " ";
    // }
    int res = 0;
    for (int i = 0; i < n; i++) {

        int l = i + 1,r = n - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (b[m] >= a[i]) {
                l = m + 1;
                res = max(res, m - i);
            } else {
                r = m - 1;
            }
        }

    }
    cout << res;

}
void testCase3() {
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> v;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(a[j]>=a[i]){
                v.push_back(j-i);
                break;
            }
        }
    }
    int max=INT_MIN;
    for(auto x:v){
        if(x>max){
            max=x;
        }
    }
    cout<<max<<endl;
}