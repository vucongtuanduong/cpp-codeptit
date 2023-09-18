#include <bits/stdc++.h>
using namespace std;
void testCase();
string tolower(string s);
void testCase2();//bai cua TQB
int main () {
    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--) {
    //     testCase();
    //     cout << endl;
        
    // }


    testCase();
}
void testCase() {
    string s,tmp;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    while (ss >> tmp) {
        tmp = tolower(tmp);
        v.push_back(tmp);
    }
    cout << v[v.size()-1];
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i][0];
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
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	cout<<v.back();
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
	cout<<"@ptit.edu.vn";
}