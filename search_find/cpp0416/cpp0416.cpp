#include <iostream>
#include <algorithm>
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
	int n,k;
	cin >> n >> k;
	int *a = new int[n];
	for (int i = 0;i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) {
				count++;
			}
		}
	}
	cout << count;
}
void testCase2() {
    int n; float s; cin>>n>>s;
    int ans=0;
    map<float,int> mp;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]+=1;
    }
    for(int i=0;i<n;i++){
        if((s-a[i])*2!=s){
            ans+=mp[s-a[i]];
        }
    }
    ans/=2;
    for(int i=0;i<mp[s/2];i++){
        ans+=i;
    }
    cout<<ans<<endl;
}