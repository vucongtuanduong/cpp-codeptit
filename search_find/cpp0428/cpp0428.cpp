#include <iostream>
#include <set>
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
	int n, m;
	cin >> n >> m;
	int s = n + m;
	int a[s];
	for (int i = 0; i < s; i++) {
		cin >> a[i];
	}
	sort(a, a + s);
	for (int i = 0; i < s; i++) {
		cout << a[i] << " ";
	}
}
void testCase2() {
    int n,m; cin>>n>>m;
    int s=n+m;
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