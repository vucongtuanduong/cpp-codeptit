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
	vector<long> res, rr;
	cin>>n;
	getchar();
	fori(i, 0, n/2)
	{
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		s1 = ' ' + s1;
		s2 = ' ' + s2;
		long d1=0, d2=0;
		fori(i, 0, s1.size()-1)
			if(s1[i]==' '&&s1[i+1]) d1++;
		fori(i, 0, s2.size()-1)
			if(s2[i]==' '&&s2[i+1]) d2++;
		if(d1==6&&d2==8) res.pb(1);
			else if(d1==d2&&d1==7) res.pb(2);
	}
	long i=0;
	while(i<res.size())
		if(res[i]==1&&res[i+1]==1) 
			i++;
		else if(res[i]==1&&(res[i+1]==2||i==res.size()-1)) 
		{
			rr.pb(1);
			i++;
		}
		else if(res[i]==2&&res[i+1]==2) 
		{
			rr.pb(2);
			i+=2;
		}
	cout<<rr.size()<<endl;
	fori(i, 0, rr.size()) cout<<rr[i]<<endl;
}

int main()
{
//	long t;
//	cin>>t;
//	while(t--)
		solve();
}
