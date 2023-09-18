#include <iostream>
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
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int l = 1e8, r = -1;
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            if (i > r) {
                r = i;
            } 
            if (i < l) {
                l = i;
            }

        }
    }
    cout << l + 1 << " " << r + 1;
}
void testCase2() {
    		int n; cin>>n;
		int a[n];
		int b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int imin = INT_MAX;
		int imax = INT_MIN;
		for(int i=0; i<n; i++){
			if(b[i]!=a[i]){
				if(i<imin){
					imin=i;
				}
				if(i>imax){
					imax=i;
				}
			}
		}
		cout<<imin+1<<" "<<imax+1<<endl;
}