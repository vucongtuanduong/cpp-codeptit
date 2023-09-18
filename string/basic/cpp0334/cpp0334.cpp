#include <iostream>
using namespace std;
void testCase();
void testCase2();
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        string tmp = "";
        if (s[i] >= '0' && s[i] <= '9') {
            tmp += s[i];
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] >= '0' && s[j] <= '9') {
                    tmp += s[j];
                    i++;
                } else {
                    break;
                }
            }
        }
        if (!tmp.empty()) {
            int temp = stoi(tmp);
            res += temp;
        }
        
        
    }
    cout << res;
}
void testCase2() {
    		string s;
		cin>>s;
		int ans=0;
		int sum=0;
		for(char x:s){
			if(isdigit(x)){
				sum = sum * 10 + x -'0';
			}else{
				ans+=sum;
				sum=0;
			}
		}
		ans+=sum;
		cout<<ans<<endl;
}