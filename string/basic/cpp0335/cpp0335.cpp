#include <iostream>
using namespace std;
void testCase();
void testCase2();
void testCase3();
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
    cin >> s;
    int max = -1000;
    int temp = 0;
    for (char x : s) {
        if (x >= '0' && x <= '9') {
            temp = temp * 10 + x - '0';
            
        } else {
            if (temp > max) {
                max = temp;
                temp = 0;
            }
        }

    }
    cout << max;
}
void testCase2() {
    string s;
    cin >> s;
    int max = -1000;
    int temp = 0;
    for (char x : s) {
        if (x >= '0' && x <= '9') {
            temp = temp * 10 + x - '0';
            if (temp > max) {
                max = temp;
                
            }
        } else {
            temp = 0;
        }

    }
    cout << max;
}
void testCase3() {
    		string s;
		cin>>s;
		int max=0;
		int sum=0;
		for(char x:s){
			if(isdigit(x)){
				sum = sum * 10 + x -'0';
				if(sum>max){
					max=sum;
				}
			}else{
				sum=0;
			}
		}
		if(sum>max){
			max=sum;
		}
		cout<<max<<endl;
}