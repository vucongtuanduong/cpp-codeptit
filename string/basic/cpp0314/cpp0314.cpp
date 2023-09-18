#include <bits/stdc++.h>
using namespace std;
void testCase();

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
    int q;
    cin >> q;
    cin.ignore();
    set<string> s;
    while (q--) {
        string input;
        getline(cin, input);
        
        s.insert(input);
    }
    cout << s.size();
}

void testCase2() {
	int t; cin>>t;
	map<string,int> mp;
	int ans=0;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		mp[s]+=1;
	}
	cout<<mp.size()<<endl;
}