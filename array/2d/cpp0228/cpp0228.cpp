#include<bits/stdc++.h>
using namespace std;
void testCase() {
	int m; cin>>m;
	int n=4*m;
	int c[n][n];
	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cnt+=1;
			c[i][j]=cnt;
		}
	}
	vector<int> a;
	vector<int> b;
	int imin=0;
	int imax=n-1;
	int jmin=0;
	int jmax=n-1;
	while(imin<imax && jmin<jmax){
		for(int i=imin; i<=imax; i++){
			a.push_back(c[i][jmin]);
		}
		jmin++;
		for(int i=imax; i>=imin; i--){
			b.push_back(c[i][jmax]);
		}
		jmax--;
		for(int j=jmin; j<=jmax; j++){
			a.push_back(c[imax][j]);
		}
		imax--;
		for(int j=jmax; j>=jmin; j--){
			b.push_back(c[imin][j]);
		}
		imin++;
		for(int i=imax; i>=imin; i--){
			a.push_back(c[i][jmax]);
		}
		jmax--;
		for(int i=imin; i<=imax; i++){
			b.push_back(c[i][jmin]);
		}
		jmin++;
		for(int j=jmax; j>=jmin; j--){
			a.push_back(c[imin][j]);
		}
		imin++;
		for(int j=jmin; j<=jmax; j++){
			b.push_back(c[imax][j]);
		}
		imax--;
	}
	for(int i=b.size()-1; i>=0; i--){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	for(int i=a.size()-1; i>=0; i--){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		testCase();
	}
}
