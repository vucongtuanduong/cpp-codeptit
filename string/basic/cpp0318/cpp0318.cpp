#include <iostream>
using namespace std;
void testCase();
int checkAllEqual(string s);
int checkIncrease(string s);
int checkCoupleEqual(string s);
int all68(string s);
void testCase2();
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        testCase2();
        cout << endl;
    }
}
void testCase() {
    string s;
    getline(cin, s);
    
    
    s.erase(8, 1);    
    s.erase(0, 4);
    // cout << s;
    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i];
    // }
    // all68(s);
    if (checkAllEqual(s) || checkIncrease(s) || checkCoupleEqual(s) || all68(s) ) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    // checkIncrease(s);
    // checkCoupleEqual(s);
    // checkAllEqual(s);
}
int checkAllEqual(string s) {
    char e = s[0];
    for (int i = 1; i < s.size(); i++) {
        // cout << s[i];
        if (s[i] != e) {
            return 0;
        }
    }
    return 1;
}
int checkIncrease(string s) {
    char x = s[0];
    for (int i = 1; i < s.size(); i++) {
        // cout <<  s[i];
        if (s[i] <= x) {
            return 0;
        }
        x = s[i];
    }
    return 1;
}
int checkCoupleEqual(string s) {
    string s1 = s.substr(0, 3);
    string s2 = s.substr(3, 2);
    // cout << s1 << endl;
    // cout << s2 << endl;
    // checkAllEqual(s1);
    // checkAllEqual(s2);
    if (checkAllEqual(s1) && checkAllEqual(s2)) {
        return 1;
    } 
    return 0;
}
int all68(string s) {
    for (int i = 0; i < s.size(); i++) {
        // cout << s[i];
        if (s[i] != '6' && s[i] != '8') {
            return 0;
        }
        
    }
    return 1;
} 
void testCase2() {
			string a;
		getline(cin,a);
		int cnt68=0;
		int cnt32=0;
		int cnt123=0;
		for(int i=5; i<=10; i++){
			if(a[i]>=a[i+1] && i!=10 && i!=8 && i!=7){
				cnt123=1;
			}
			if(a[i]!='6' && a[i]!='8' && i!=8){
				cnt68=1;
			}
			if(a[i]!=a[i+1] && i!=10 && i!=8 && i!=7){
				cnt32=1;
			}
		}
		if(cnt68==0 || cnt32==0 || cnt123==0){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
}