#include <iostream>
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
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i  = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			cout << i + 1;
			return;
		}
	}
	cout << "-1";
}
void testCase2() {
    		int n,x; cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(a[i]==x){
				cout<<i+1<<endl;
				ans+=1;
				break;
			}
		}
		if(ans==0){
			cout<<"-1"<<endl;
		}
}