#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void testCase();
void check(int n);
int isPrime(int n);
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
    
    check(n);
}
void check(int n){
    int res = 0;
    if (isPrime(n)) {
        cout << "0";
        return ;
    }
    vector<int> v;
    for (int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            v.push_back(i);
            n /= i;
        }
        if (n == 1) {
            break;
        }
    }
    if (n > 1) {
        v.push_back(n);
    }
    if (v.size() == 3 && v[0] != v[1] && v[1] != v[2]) {
        cout << "1";
    } else {
        cout << "0";
    }
    
}
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
