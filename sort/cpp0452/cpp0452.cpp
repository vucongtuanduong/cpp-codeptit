#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
void testCase();
void testCase2();
void testCase3();
// void scanArray(long long a[], int &n);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase3();
        cout << endl;
    }
}
void testCase() {
    long long n1,n2, n3;
    cin >> n1 >> n2 >> n3;
    long long a[n1], b[n2], c[n3];
    map<long long, long long> m1, m2, m3;
    for (long long i = 0; i < n1; i++) {
        cin >> a[i];
        m1[a[i]]++;
    }
    for (long long i = 0; i < n2; i++) {
        cin >> b[i];
        
    }
    for (long long i = 0; i < n2; i++) {
        // cin >> b[i];
        if (m1[b[i]] >= 1) {
            m2[b[i]]++;
        }
    }
    for (long long i =0 ; i < n3; i++) {
        cin >> c[i];
        // if (m2[c[i]] >= 1) {
        //     m3[c[i]]++;
        // }
    }
    for (long long i =0 ; i < n3; i++) {
        // cin >> c[i];
        if (m2[c[i]] >= 1) {
            m3[c[i]]++;
        }
    }
    if (m3.size() == 0) {
        cout << "-1";
        return;
    } else {
        for (auto x : m3) {
            cout << x.first << " ";
        }
    }
    


}
void testCase2() {
    long long n1,n2, n3;
    cin >> n1 >> n2 >> n3;
    long long a[n1], b[n2], c[n3];
    map<long long, long long> m;
    long long x[n1 + n2 + n3];
    int s = n1 + n2 + n3;
    for (int i = 0; i < s; i++) {
        cin >> x[i];
        m[x[i]]++;
    }
    int count = 0;
    for (auto x : m) {
        if (x.second >= 3) {
            cout << x.first << " ";
            count++;
        }
    }
    if (count == 0) {
        cout << "-1";
    }
} 
void testCase3() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    long long a[n1], b[n2], c[n3];
    
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    for(auto &x : c) cin >> x;

    int i = 0, j = 0, k = 0;
    int ok = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
            ok = 1;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
    if (!ok) {
        cout << "-1";
    } 
    // cout << endl;
}
// void scanArray(long long a[], int &n, map<long long, int> m) {
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         m[a[i]]
//     }
// }