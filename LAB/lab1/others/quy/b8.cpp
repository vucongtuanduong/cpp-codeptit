#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#define fori(i,a,b) for(long i=a;i<b;i++)
#define forj(j,a,b) for(long j=a;j<b;j++)
#define ford(i,a,b) for(long i=a;i>b;i--)
#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

void solve()
{
	ll n;
	cin>>n;
	ll r = (ll) sqrt(n);
	ll res=0;
	fori(i, 1, r+1)
		if(n%i==0) res += i + (n/i);
	if(r*r==n) res-=r;
	cout<<res<<endl;
}

int main()
{
	long t;
	cin>>t;
	while(t--)
		solve();
}
