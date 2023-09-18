#include <bits/stdc++.h>
using namespace std;
void testCase();
void testCase2(); //bai cua TQB
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
        
    }
}
void testCase() {
    int n,d;
    cin >> n >> d;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = d; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < d; i++) {
        cout << a[i] << " ";
    }
}
void testCase2() {
    int n,d; cin>>n>>d;
    int a[n]; int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    int p = d%n;
    for(int i=0;i<n;i++){
        if(i+p>=n){
            b[i] = a[i-n+p];
        }else{
            b[i] = a[i+p];
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}