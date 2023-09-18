#include <iostream>
#include <set>

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
	long long a[n];
	int current = 0;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		if (x > 0) {
			a[current] = x;
			current++;
		}
		
	}

	for (int i = 0; i < current; i++) {
		cout << a[i] << " ";
	}
	for (int i = current; i < n; i++) {
		cout << "0 ";
	}
}
void testCase2() {
    int n; cin>>n;
    long long a[n];
    int so=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            so+=1;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            cout<<a[i]<<" ";
        }
    }
    for(int i=0;i<so;i++){
        cout<<"0 ";
    }
    cout<<endl;
}