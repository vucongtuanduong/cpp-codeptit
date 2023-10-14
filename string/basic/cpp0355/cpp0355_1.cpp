#include<bits/stdc++.h>
using namespace std;
int check(char c){
	return c == '.' || c == '?' || c == '!';
}
void xoacach(string &s){
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i];
		if(i != v.size() - 1)
			cout << " ";
	}
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
	getline(cin, s);
	string tmp = "";
	vector<string> v;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ' ')	continue;
		while(i < s.length() && !check(s[i])){
			tmp += (char)tolower(s[i]) ; 
			++i;
		}
		v.push_back(tmp);
		tmp = "";
	}
	for(int i = 0; i < v.size(); i++){
		v[i][0] = toupper(v[i][0]);
		xoacach(v[i]);
		if(i != v.size() - 1)
			cout << endl;
		}
	}