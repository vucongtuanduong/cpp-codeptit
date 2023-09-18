#include <iostream>
#include <algorithm>
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
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n, greater<int>());
    sort(b, b + n);

    for (int i = 0; i < n / 2; i++) {
        cout << a[i] << " ";
        cout << b[i] << " ";
        
    }
    int x = n /2;
    if (x * 2 != n) {
        cout << a[x];
    }
}
void testCase2() {
    		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(n%2==1){
			for(int i=0; i<n/2; i++){
				cout<<a[n-1-i]<<" "<<a[i]<<" ";
			}
			cout<<a[n/2]<<endl;
		}else{
			for(int i=0; i<n/2; i++){
				cout<<a[n-1-i]<<" "<<a[i]<<" ";
			}
			cout<<endl;
		}
}