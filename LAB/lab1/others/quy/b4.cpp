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

ll maxx(ll n, ll m)
{
	string s1 = to_string(n);
	string s2 = to_string(m);
	fori(i, 0, s1.size()) 
		if(s1[i]=='5') s1[i]='6';
	fori(i, 0, s2.size()) 
		if(s2[i]=='5') s2[i]='6';
	n = stoll(s1);
	m = stoll(s2);
	return(n+m);
}

ll minn(ll n, ll m)
{
	string s1 = to_string(n);
	string s2 = to_string(m);
	fori(i, 0, s1.size()) 
		if(s1[i]=='6') s1[i]='5';
	fori(i, 0, s2.size()) 
		if(s2[i]=='6') s2[i]='5';
	n = stoll(s1);
	m = stoll(s2);
	return(n+m);
}

void solve()
{
	ll n, m;
	cin>>n>>m;
	cout<<minn(n, m)<<" "<<maxx(n, m)<<endl;
}

int main()
{
	long t;
	cin>>t;
	while(t--)
		solve();
}
