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
	getchar();
	map<string, long> mapp;
	vector<string> vt;
	bool neww=1;
	fori(i, 0, n)
	{
		string s;
		getline(cin, s);
		bool kt=0;
		fori(i, 0, s.size()) 
			if(s[i]!=' ') kt=1;
		if(neww&&kt)
		{
			vt.pb(s);
			neww=0;
			continue;
		}
		else if(kt==0)
		{
			neww=1;
			continue;
		}
		else mapp[vt.back()]++;
	}
	fori(i, 0, vt.size()) cout<<vt[i]<<": "<<mapp[vt[i]]<<endl;
}

int main()
{
//	long t;
//	cin>>t;
//	while(t--)
		solve();
}
