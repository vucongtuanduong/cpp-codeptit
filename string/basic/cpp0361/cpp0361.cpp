#include <iostream>
#include <vector>
using namespace std; 
void testCase();
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
     
}
void testCase() {
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0; i<n; i++){ 
        cin>>a[i]; 
    } 
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && a[i].find(a[j]) != -1) {
                count++;
            }
        }
    }
    cout << count;
}