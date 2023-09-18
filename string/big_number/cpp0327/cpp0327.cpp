#include <bits/stdc++.h>
using namespace std;
void testCase();

void testCase2();//bai cua TQB
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
        
    }


    // testCase();
}
void testCase() {
    string s;
    cin >> s;
    int n = 0;
    for (int i = 0; i < s.size(); i++) {
        n = n * 2 + (s[i] - '0');
        n %= 5;
    }
    if (n == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
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