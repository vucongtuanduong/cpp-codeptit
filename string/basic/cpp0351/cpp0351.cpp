#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
using namespace std;
void testCase();
void choice1(vector<string> v);
void choice2(vector<string> v);
string standard(string s);
char toupper(char c);
char tolower(char c);
void testCase2();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss (s);
    string temp;
    while (ss >> temp) {
        v.push_back(standard(temp));
    }
    if (n == 1) {
        
        choice1(v);
    } else if (n == 2) {
        choice2(v);
        
    }
}
void choice1(vector<string> v) {
    
    cout << v[v.size() - 1] << " ";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << " ";
    }
}
string standard(string s) {
    s[0] =  toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}
char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}
char tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}
void choice2(vector<string> v) {
    for (int i = 1; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << v[0];
}
void testCase2() {
    		int a; cin>>a;
		cin.ignore();
		if(a==1){
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
			v[v.size()-1][0]=toupper(v[v.size()-1][0]);
			cout<<v.back()<<" ";
			for(int i=0; i<v.size()-1; i++){
				v[i][0]=toupper(v[i][0]);
				cout<<v[i]<<" ";
			}
		}else{
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
			for(int i=1; i<v.size(); i++){
				v[i][0]=toupper(v[i][0]);
				cout<<v[i]<<" ";
			}
			v[0][0]=toupper(v[0][0]);
			cout<<v[0];
		}
}