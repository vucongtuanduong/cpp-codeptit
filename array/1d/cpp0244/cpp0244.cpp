#include <bits/stdc++.h>
using namespace std;
void testCase();

void testCase2();//bai cua TQB
int main () {

        testCase();

        

}
void testCase() {
    int n;
    cin >> n;
    set<int> s;
    for (int i =0 ; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto x:s) {
        cout << x << " ";
    }

}

void testCase2() {
    
} 