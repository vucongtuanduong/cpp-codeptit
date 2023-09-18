#include <bits/stdc++.h>
using namespace std;
void testCase();
int sum(int x);//function cua TQB
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
    int res = s.size();
    for (int i = 0 ; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j]) {
                res ++;
            }
        }
    }
    cout << res;
}
int sum(int x){
	int X=0;
	for(int i=1;i<=x;i++){
		X+=i;
	}
	return X;
}
void testCase2() {
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]+=1;
    }
    int ans=0;
    for(auto x:mp){
        ans+=sum(x.second);
    }
    cout<<ans<<endl;
}