#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
//	cin.ignore();
	while (t--) {
		string n;
		cin >> n;
		long long chan = 0;
		for(int i=0; i<n.size(); i++){
			if(i%2==0){
				chan+=(n[i] - '0');
				chan %= 11;
			}else{
				chan = chan - (n[i] - '0');
				chan %= 11;
			}
			
		}
		if (abs(chan) % 11 == 0) {
			cout << "1\n";
		} else {
			cout << "0\n";
		}
	}
}
