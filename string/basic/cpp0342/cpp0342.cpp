#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void testCase();
void testCase2();
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    cin >> s;
    string res = "";
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            num += (s[i] - '0');
        } else {
            res += s[i];
        }
    }
    sort(res.begin(), res.end());
    res += to_string(num);
    cout << res;
}
void testCase2() {
    		string s;
		cin>>s;
		int sum=0;
		map<char,int> mp;
		for(int i=0; i<s.size(); i++){
			if(isdigit(s[i])){
				sum+=s[i]-'0';
			}else{
				mp[s[i]]+=1;
			}
		}
		for(auto x:mp){
			int i=x.second;
			while(i--){
				cout<<x.first;
			}
		}
		cout<<sum<<endl;
}