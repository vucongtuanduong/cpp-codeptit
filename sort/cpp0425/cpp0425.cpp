#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		vector<int> vmin;
		vector<int> vmax;
		if(n%2==0){
			for(int i=0; i<n/2; i++){
				vmin.push_back(a[i]);
			}
			for(int i=n/2; i<n; i++){
				vmax.push_back(a[i]);
			}
		}
		else{
			for(int i=0; i<=n/2; i++){
				vmin.push_back(a[i]);
			}
			for(int i=n/2+1; i<n; i++){
				vmax.push_back(a[i]);
			}
		}
		for(int i=0; i<n/2; i++){
			cout<<vmin[i]<<" "<<vmax[i]<<" ";
		}
		if(n%2==1){
			cout<<vmin[n/2];
		}
		cout<<endl;
	}
}
