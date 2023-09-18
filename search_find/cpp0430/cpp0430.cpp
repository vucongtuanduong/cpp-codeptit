#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
void testCase();
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
	map<int , int> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	int max = *max_element(a, a + n);
	int min = *min_element(a, a + n);
	int count = 0;
	for (int i = min; i <= max; i++) {
		if (m[i] < 1) {
			count++;
		}
	}
	cout << count;
}
void testCase2() {
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]+=1;
    }
    sort(a,a+n);
    int hieu = a[n-1]-a[0];
    cout<<hieu-mp.size()+1<<endl;
}