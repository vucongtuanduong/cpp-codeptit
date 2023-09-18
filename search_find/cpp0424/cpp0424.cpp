#include <iostream>
#include <set>
#include <algorithm>
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
	int k,n;
	cin >> k >> n;
	int a[n * k];
	int current = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			a[current++] = x;
		}
	}
	sort(a, a + n * k);
	for (int i = 0; i < current; i++) {
		cout << a[i] << " ";
	}
}
void testCase2() {
    int n,m; cin>>n>>m;
    int s=n*m;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    sort(a,a+s);
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}