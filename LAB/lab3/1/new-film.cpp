#include <bits/stdc++.h>
using namespace std;
int idx=1;
class film
{
	public:
		string id,name,type;
		int d,m,y,ep;
		void nhap()
		{
			cin>>type;
			cin>>d;
			getchar();
			cin>>m;
			getchar();
			cin>>y; 
			getchar();
			getline(cin,name);
			cin>>ep;
			string s=to_string(idx);
			while(s.size()<3)
			{
				s='0'+s;
			}
			s='P'+s;
			id=s;
			idx++;
		}
		void setType(vector<string> v)
		{
			string tmp="";
			for(int i=0;i<type.size();i++)
			{
				if(type[i]>='0'&&type[i]<='9')
				{
					tmp=tmp+type[i];
				}
			 } 
			int x=stoi(tmp);
			type=v[x-1];
		}
		void in()
		{
			cout<<id<<" "<<type<<" ";
			printf("%.2d/%.2d/%.4d ",d,m,y);
			cout<<name<<" "<<ep<<endl;
		}
		
		
};
bool cmp(film a,film b)
{
	if(a.y!=b.y)
	{
		return a.y<b.y;
	}
	else
	{
		if(a.m!=b.m)
		{
			return a.m<b.m;
		}
		else
		{
			if(a.d!=b.d)
			{
				return a.d<b.d;
			}
			else
			{
				if(a.name!=b.name)
				{
					return a.name<b.name;
				}
				else
				{
					return a.ep>b.ep;
				}
			}
		}
	}
}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif
	int n,m;
	cin>>n>>m;
	getchar();
	vector<string> v;
	while(n--)
	{
		string s;
		getline(cin,s);
		v.push_back(s);
	}
	film ds[m];
	for(int i=0;i<m;i++)
	{
		ds[i].nhap();
		ds[i].setType(v);
	}
	sort(ds,ds+m,cmp);
	for(int i=0;i<m;i++)
	{
		ds[i].in();
	}
	
	return 0;
}
