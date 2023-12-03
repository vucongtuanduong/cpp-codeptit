#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Contact
{
	public: 
	string name,date,num,ten;
	void in()
	{
		cout<<name<<": "<<num<<" "<<date<<endl;
	}
	void setDate()
	{
		date=this->date.substr(5,10);
	}
	string getName()
	{
		int len=name.size()-1;
		while(name[len]!=' ')
		{
			len--;
		}
		string tmp="";
		for(int i=len+1;i<name.size();i++)
		{
			tmp=tmp+name[i];
		}
		return tmp;
	}
	string getName2()
	{
		int len=name.size()-1;
		while(name[len]!=' ')
		{
			len--;
		}
		int l=len-1;
		while(name[l]!=' ')
		{
			l--;
		}
		string tmp="";
		for(int i=l+1;i<len;i++)
		{
			tmp=tmp+name[i];
		}
		return tmp;
	 } 
};
bool cmp(Contact a,Contact b)
{
	if(a.getName()!=b.getName())
	{
		return a.getName()<b.getName(); 
	}
	return a.getName2()<b.getName2(); 
}
int main(int argc, char** argv) {
	freopen("SOTAY.txt","r",stdin);
	freopen("DienThoai.txt","w",stdout);
	string s;
	vector<string> v;
	while(getline(cin,s))
	{
		v.push_back(s);
	}
	int a[1000];
	int j=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i].find('/')!=string::npos)
		{
			a[j++]=i;
		}
	}
	Contact ds[100];
	int m=0;
	for(int i=0;i<j-1;i++)
	{
		for(int k=a[i]+1;k<a[i+1];k+=2)
		{
			ds[m].date=v[a[i]];
			ds[m].name=v[k];
			ds[m].num=v[k+1];
			ds[m].setDate();
			m++;
		}
	}
	int x=a[j-1];
	for(int i=x+1;i<v.size();i+=2)
	{
		ds[m].date=v[x];
		ds[m].name=v[i];
		ds[m].num=v[i+1];
		ds[m].setDate();
		m++;
	}
	sort(ds,ds+m,cmp);
	for(int i=0;i<m;i++)
	{
		ds[i].in();
	}
	
	
	
	
	return 0;
}
