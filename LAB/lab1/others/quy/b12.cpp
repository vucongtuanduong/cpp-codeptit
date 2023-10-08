#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#define fori(i,a,b) for(long i=a;i<b;i++)
#define forj(j,a,b) for(long j=a;j<b;j++)
#define ford(i,a,b) for(long i=a;i>b;i--)
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fi first
#define se second
using namespace std;

long long a[94];
void fibo(){
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=93;i++){
		a[i]=a[i-1]+a[i-2];
	}
}
int main()
{
	long t;
	cin>>t;
	fibo();
	while(t--){
		int ok=0;
		long long n;cin>>n;
		for(int i=0;i<=93;i++){
			if(n==a[i]){
				ok=1;
				break;
			}
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
		
}
