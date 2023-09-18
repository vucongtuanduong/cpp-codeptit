#include <bits/stdc++.h>
using namespace std;
void testCase();

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
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            cout << b[i] << " ";
            cout << a[i] << " ";
        }
    } else {
        for (int i = 0; i < n / 2; i++) {
            cout << b[i] << " ";
            cout << a[i] << " ";
        }
        cout << b[(int)n / 2];
    }
    
}   

void testCase2() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0){
        for(int i=0;i<=(n-1)/2;i++){
            cout<<a[n-1-i]<<" "<<a[i]<<" ";
        }
    }else{
        for(int i=0;i<=(n-2)/2;i++){
            cout<<a[n-1-i]<<" "<<a[i]<<" ";
        }
        cout<<a[n/2];	
    }
    cout<<endl;
}