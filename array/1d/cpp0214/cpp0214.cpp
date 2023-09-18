#include <bits/stdc++.h>
using namespace std;
void duyet(int a[], int n, int k){
	int max=INT_MIN; int I=0;
	for(int i=0; i<k; i++){
		if(a[i]>max){
			max=a[i];
			I=i;
		}
	}
	cout<<max<<" ";
	for(int i=k; i<n; i++){
		if(i-I<k){
			if(a[i]>=max){
				max=a[i];
				I=i;
				
			}
			cout<<max<<" ";
		}else{
			I += 1;
			max = a[I];
			for(int j=I+1; j <= i; j++) {
				if (a[j] >= max) {
					max = a[j];
					I = j;
				}
				
			}
			cout << max << " ";
		}
	}
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			
		}
		duyet(a, n , k);
		cout << endl;
	}
}
