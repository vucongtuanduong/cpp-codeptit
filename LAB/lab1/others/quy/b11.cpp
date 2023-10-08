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
	string s;
	getline(cin, s);
	if(s[0]=='+'&&s[1]=='8'&&s[2]=='4') 
	{
		s.erase(0, 3);
		s = '0' + s;
	}
	if(s[0]=='8'&&s[1]=='4') 
	{
		s.erase(0, 2);
		s = '0' + s;
	}
	fori(i, 0, s.size())
		if(s[i]>=48&&s[i]<=57) cout<<s[i];
	cout<<endl;
}

int main()
{
	long t;
	cin>>t;
	getchar();
	while(t--)
		solve();
}
