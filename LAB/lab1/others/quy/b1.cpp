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

long tong(ll n)
{
	long d=0;
	while(n>0)
	{
		d+=n%10;
		n/=10;
	}
	return(d);
}

void solve()
{
	ll n;
	cin>>n;
	ll m=n;
	long d=0;
	for(ll i=2;i<=trunc(sqrt(m));i++)
		while(m%i==0)
		{
			d+=tong(i);
			m/=i;
		}
	if(m!=1) d+=tong(m);
	if(d==tong(n)) cout<<"YES\n"; else cout<<"NO\n";
}

int main()
{
//	long t;
//	cin>>t;
//	while(t--)
		solve();
}
