#include <bits/stdc++.h>
using namespace std;
void testCase();
int palindrome(string s);
int allEven(string s);
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
    if (palindrome(s) && allEven(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
int palindrome(string s) {
    int n = s.size();
    for (int i = 0; i <= n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}
int allEven(string s) {
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] - '0') % 2 == 1) {
            return 0;
        }
    }
    return 1;
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