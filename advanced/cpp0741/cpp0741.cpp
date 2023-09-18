#include <iostream>
using namespace std;
void testCase();
long long powll(int x, int y, int p);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    } 
}
void testCase() {
    int x,y,p;
    cin >> x >> y >> p;
    cout << powll(x, y, p);
}
void testCase();
long long powll(int x, int y, int p) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        long long res = powll(x, y/2, p);
        if (y % 2 == 0) {
            return res * res % p;
        } else {
            return (x * (res * res % p) % p);
        }
    }
    
}