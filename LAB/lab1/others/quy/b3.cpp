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
	long n;
	cin>>n;
	long a[n+5];
	multiset<long> ms;
	fori(i,0,n)
	{
		cin>>a[i];
		ms.insert(a[i]);
	}
	bool kt=0;
	fori(i,0,n)
		if(ms.count(a[i])>1)
		{
			cout<<a[i];
			kt=1;
			break;
		}
	if(kt==0) cout<<"NO";
	cout<<endl;
}

int main()
{
	long t;
	cin>>t;
	while(t--)
		solve();
}
