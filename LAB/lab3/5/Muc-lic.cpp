#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class MucLuc
{
	public:
	string name,page,level;
	void in()
	{
		int tmp=stoi(level);
		while(tmp--)
		{
			cout<<">";
		}	
			cout<<name<<"--- "<<page<<endl;
			
	}
	void setPage()
	{
		string tmp="";
		for(int i=0;i<page.size();i++)
		{
			if(page[i]>='0'&&page[i]<='9')
			{
				tmp=tmp+page[i];				
			}	
			
		}	
		page=tmp;
	}	
	void setLevel()
	{
		string tmp="";
		int l=0;
		while(level[l]!=' ')
		{
			l++;
		}
		for(int i=0;i<l;i++)
		{
			if(level[i]>='0'&&level[i]<='9')
			{
				tmp=tmp+level[i];
			}
		}
		level=tmp;
		
	}
	void setName()
	{
		string tmp="";
		int l=0;
		while(name[l]!=' ')
		{
			l++;
		}
		for(int i=l+1;i<name.size();i++)
		{
			tmp=tmp+name[i];
		}
		name=tmp;
	}
};
int main(int argc, char** argv) {
	freopen("VANBAN.txt","r",stdin);
	freopen("MUCLUC.txt","w",stdout);
	string s;
	vector<string> v;
	while(getline(cin,s))
	{
		v.push_back(s);
	}
	int a[10000];
	int j=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i].find("Page")!=string::npos)
		{
			a[j++]=i;
		}
	}
	MucLuc ds[100];
	int m=0;
	for(int i=0;i<j-1;i++)
	{
		for(int k=a[i]+1;k<a[i+1];k++)
		{
			if(v[k].find("Level")!=string::npos)
			{
				ds[m].page=v[a[i]];
				ds[m].level=v[k];
				ds[m].name=v[k];
				ds[m].setLevel();
				ds[m].setName();
				ds[m].setPage();
				m++;
			}
		}
	}
	for(int i=a[j-1]+1;i<v.size();i++)
	{
		if(v[i].find("Level")!=string::npos)
		{
			ds[m].page=v[a[j-1]];
			ds[m].level=v[i];
			ds[m].name=v[i];
			ds[m].setLevel();
			ds[m].setName();
			ds[m].setPage();
			m++;
		}
	 } 
	for(int i=0;i<m;i++)
	{
		ds[i].in();
	}
	
	
	return 0;
}
