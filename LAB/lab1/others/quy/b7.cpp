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
	multiset<long, greater<long>> a;
	fori(i, 0, n)
	{
		long r;
		cin>>r;
		a.insert(r);
	}
	for(auto i:a)
	{
		cout<<i<<" ";
		m--;
		if(m==0) break;
	}
	cout<<endl;
}

int main()
{
	long t;
	cin>>t;
	while(t--)
		solve();
}
