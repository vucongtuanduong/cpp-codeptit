#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		int b[m];
		map<int, int> mp;
//		map<int, int> mpb;
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]]+=1;
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
			while(mp[b[i]]--){
				cout<<b[i]<<" ";
			}
			mp[b[i]]=0;
		}
		for(auto x:mp){
			while(x.second--){
				cout<<x.first<<" ";
			}
		}
		cout << endl;
	}
}
