#include <iostream>
#include <map>
#include <set>
#include <sstream>
using namespace std;
void testCase();
int main  (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b[i];     
    }
    for (int i = 0; i < n3; i++) {
        cin >> c[i];
    }
    int i = 0,  j =0, k = 0;
    int ok = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            ok = 1;
            i++;
            j++;
            k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
    if (ok == 0) {
        cout << "-1";
    }
}