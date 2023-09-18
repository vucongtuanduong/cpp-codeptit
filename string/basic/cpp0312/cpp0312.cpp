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
    int k;
    cin >> k;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    int res = 26 - m.size();
    if (res <= k) {
        cout << "1";
    } else {
        cout << "0";
    }
}   

void testCase2() {
	string s;
    cin>>s;
    int n; cin>>n;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]+=1;
    }
    int x = 26 - mp.size();
    if(n<x){
        cout<<"0"<<endl;
    }else{
        cout<<"1"<<endl;
    }
}