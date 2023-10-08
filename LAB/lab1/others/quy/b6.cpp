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

double a[45];

void init()
{
	for(long i=0;i<=2;i++) a[i]=0.0;
	for(long i=3;i<=4;i++) a[i]=2.5;
	for(long i=5;i<=6;i++) a[i]=3.0;
	for(long i=7;i<=9;i++) a[i]=3.5;
	for(long i=10;i<=12;i++) a[i]=4.0;
	for(long i=13;i<=15;i++) a[i]=4.5;
	for(long i=16;i<=19;i++) a[i]=5.0;
	for(long i=20;i<=22;i++) a[i]=5.5;
	for(long i=23;i<=26;i++) a[i]=6.0;
	for(long i=27;i<=29;i++) a[i]=6.5;
	for(long i=30;i<=32;i++) a[i]=7.0;
	for(long i=33;i<=34;i++) a[i]=7.5;
	for(long i=35;i<=36;i++) a[i]=8.0;
	for(long i=37;i<=38;i++) a[i]=8.5;
	for(long i=39;i<=40;i++) a[i]=9.0;
}

void solve()
{
	long sR, sL;
	double R, L, S, W;
	cin>>sR>>sL>>S>>W;
	R = a[sR];
	L = a[sL];
	double overall = (R+L+S+W)/4;
	double flac = overall-trunc(overall);
	if(flac<0.25) overall-=flac;
		else if(flac>=0.25&&flac<0.5) overall = overall - flac + 0.5;
			else if(flac>=0.5&&flac<0.75) overall = overall - flac + 0.5;
				else if(flac>=0.75) overall = overall - flac + 1.0;
	cout<<fixed<<setprecision(1)<<overall<<endl;
}

int main()
{
	long t;
	cin>>t;
	init();
	while(t--)
		solve();
}
