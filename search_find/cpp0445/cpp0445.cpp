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
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[0] != a[1]) {
        cout << a[0] << " " << a[1];
    } else {
        cout << "-1";
    }
}
void testCase2() {
    		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(a[0]==a[1]){
			cout<<"-1"<<endl;
		}else{
			cout<<a[0]<<" "<<a[1]<<endl;
		}
}