#include <iostream>
#include <vector>
#include <sstream>
#include <map>

using namespace std;
map<string ,int> m;
void testCase();
string tolower(string s);
void testCase2();
int main ( ){
    int t;
    cin >> t;
    cin.ignore();
    while (t--)  {
        testCase();
        cout << endl;
    }
}
void testCase () {
    string s,tmp;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    while (ss >> tmp) {
        v.push_back(tolower(tmp));
    }
    string res = "";
    cout << v[v.size() - 1];
    res += v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i][0];
        res += v[i][0];
    }
    m[res]++;
    if (m[res] > 1) {
        cout << m[res];
    }
    cout << "@ptit.edu.vn";
}
string tolower(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}
void testCase2() {
    		string s;
		getline(cin,s);
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
		}
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		string a=v.back();
		cout<<v.back();
		for(int i=0; i<v.size()-1; i++){
			cout<<v[i][0];
			a+=v[i][0];
		}
		mp[a]+=1;
		if(mp[a]!=1){
			cout<<mp[a];
		}
		cout<<"@ptit.edu.vn"<<endl;
}