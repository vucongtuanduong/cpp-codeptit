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
	long n, m;
	cin>>n>>m;
	long a[n+5];
	vector<long> res;
	long maxx=-1000000005, vt=-1;
	fori(i, 0, n)
	{
		cin>>a[i];
		if(a[i]>maxx)
		{
			maxx=a[i];
			vt=i;
		}
	}
	fori(i, 0, n)
		if(a[i]<0)
		{
			if(i==vt) res.pb(m);
			res.pb(a[i]);
		}
	fori(i, 0, n)
		if(a[i]>=0)
		{
			if(i==vt) res.pb(m);
			res.pb(a[i]);
		}
	fori(i, 0, n+1) cout<<res[i]<<" ";
	cout<<endl;
}

int main()
{
	long t;
	cin>>t;
	while(t--)
		solve();
}
