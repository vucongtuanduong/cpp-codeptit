#include <bits/stdc++.h>
using namespace std;
void testCase();
void scanArray(long long *a, int n);
void testCase2();//bai cua TQB
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
        
    }


    // testCase();
}
void testCase() {
    int n, m;
    cin >> n >> m;
    long long *a = new long long[n];
    long long *b = new long long[m];
    scanArray(a, n);
    scanArray(b, m);
    long long max = *max_element(a, a + n);
    long long min  = *min_element(b, b + m);
    long long res = max * min;
    cout << res;
    
}   
void scanArray(long long *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void testCase2() {
    int n,m; cin>>n>>m;
    long long a[n];
    long long b[m];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    long long ans=a[n-1]*b[0];
    cout<<ans<<endl;
}