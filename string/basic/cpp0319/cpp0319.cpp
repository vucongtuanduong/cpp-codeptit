#include <iostream>
//#include <vector>
#include <algorithm>
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    testCase();
}
void testCase() {
    int m, s;
    cin >> m >> s;
    string max = "", min = "";
    if (s == 0 && m == 1) {
        cout << "0 0" ;
    } else if (s < 1 || s > (9 * m)) {
        cout << "-1 -1" ;
    } else {
        
        int sum = s;
        while (m) {
            if (sum >= 9) {
                max += "9";
                sum -= 9;
            } else {
                max += to_string(sum);
                sum = 0;
            }
            m--;
        }
        min = max;
        reverse(min.begin(), min.end());
        if (min[0] == '0') {
            min[0] = '1';
            int i = 1;
            while (min[i] == '0') {
                i++;
            }
            min[i] -= 1;
        }
        
    }
    cout << min << " " << max;
}

void testCase2() {
	int m,s; cin>>m>>s;
	int s1=s;
	int s2=s-1;
	if(s>m*9 || s==0){
		cout<<"-1 -1"<<endl;
	}else{
		int a[m];
		int b[m];
		for(int i=0;i<m;i++){
			if(s1>9){
				b[i]=9;
				s1-=9;
			}else if(s1<=9 && s1>=0){
				b[i]=s1;
				s1-=s1;
			}else{
				b[i]==0;
			}
		}
		for(int i=m-1;i>=0;i--){
			if(s2>9){
				a[i]=9;
				s2-=9;
			}else if(s2<=9 && s2>=0){
				a[i]=s2;
				s2-=s2;
			}else{
				a	[i]==0;
			}
		}
		a[0]+=1;
		for(int i=0;i<m;i++){
			cout<<a[i];
		}
		cout<<" ";
		for(int i=0;i<m;i++){
			cout<<b[i];
		}
	}
}