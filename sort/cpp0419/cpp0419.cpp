#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
void testCase();
void testCase2();
void testCase3();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase3();
        cout << endl;
    }
}
void testCase() {
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    set<int> se;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        se.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        se.insert(b[i]);
    }
    for (auto x:se) {
        cout << x << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                cout << b[i] << " ";
                break;
            }
        }
    }
    

}
void testCase2() {
    		map<int,int> mp;
		int n; cin>>n;
		int a[n];
		int m; cin>>m;
		int b[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]]+=1;
		}
		sort(a,a+n);
		for(int i=0; i<m; i++){
			cin>>b[i];
			mp[b[i]]+=1;
		}
		sort(b,b+m);
		for(auto x:mp){
			cout<<x.first<<" ";
		}
		cout<<endl;
		for(auto x:mp){
			if(x.second>1){
				cout<<x.first<<" ";
			}
		}
		cout<<endl;
}
void testCase3() {
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    map<int, int> ma;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ma[a[i]]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        ma[b[i]]++;
    }
    for (auto x:ma) {
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x:ma) {
        if (x.second > 1) {
            cout << x.first << " ";
        }
    }
}