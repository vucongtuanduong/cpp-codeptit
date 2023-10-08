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

struct xe{
	string bien;
	string loai_xe;
	int seat;
	string move;
	string date;
};

void solve()
{
	long n;
	cin>>n;
	struct xe a[n+5];
	fori(i, 0, n) cin>>a[i].bien>>a[i].loai_xe>>a[i].seat>>a[i].move>>a[i].date;
	map<string, long> mapp;
	vector<string> ngay;
	fori(i, 0, n)
		if(a[i].move=="IN")
		{
			long d;
			if(a[i].loai_xe=="Xe_con"&&a[i].seat==5) d=10000;
				else if(a[i].loai_xe=="Xe_con"&&a[i].seat==7) d=15000;
					else if(a[i].loai_xe=="Xe_tai"&&a[i].seat==2) d=20000;
						else if(a[i].loai_xe=="Xe_khach"&&a[i].seat==29) d=50000;
							else if(a[i].loai_xe=="Xe_khach"&&a[i].seat==45) d=70000;
			if(mapp[a[i].date]==0) ngay.pb(a[i].date);
			mapp[a[i].date]+=d;
		}
	fori(i, 0, ngay.size()) cout<<ngay[i]<<": "<<mapp[ngay[i]]<<endl;
}

int main()
{
//	long t;
//	cin>>t;
//	while(t--)
		solve();
}
