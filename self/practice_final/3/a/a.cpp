//https://www.hackerrank.com/contests/28tech-thi-thu-c-cuoi-ki-ptit-test-2-ngay-29112022/challenges/ham-ly-thuyet-so-chu-so-cuoi-cung-lon-nhat/problem
#include <bits/stdc++.h>
using namespace std;
void testCase();
int isPrime(int n);
int check(int n);
//explicit
int check(int n) {
    int x = n;
    int max = x % 10;
    while (x > 0) {
        int now = x % 10;
        if (now > max) {
            return 0;
        }
        x /= 10;
    }
    return 1;
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
void testCase() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if ( check(i) &&  isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << count;

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}