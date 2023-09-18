#include <iostream>
#include <map>
using namespace std;
void testCase();
void testCase2();
int main () {
	int t;
	cin >> t;
	while (t--) {
		testCase();
		cout << endl;
	}
}
void testCase() {
	int n;
	cin >> n;
	map<long long , long long> m;
	
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		m[x]++;
	}
	for (int i = 0; i < n; i++) {
		if (m[i] > 0) {
			cout << i << " ";
		} else {
			cout << "-1 ";
		}
	}
}
void testCase2() {
    int n; cin>>n;
    long long a[n];
    map<long long,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]+=1;
    }
    for(int i=0;i<n;i++){
        if(mp[i]!=0){
            cout<<i<<" ";
        }else{
            cout<<"-1"<<" "; 	
        }
    }
    cout<<endl;
}