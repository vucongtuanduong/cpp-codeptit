#include <iostream>
#include <cmath>
using namespace std;
void testCase();
int sumDigits(long long n);
long long calSmith(long long n);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
    
}
void testCase() {
    long long n;
    cin >> n;
    long long res = calSmith(n);
    long long res2 = sumDigits(n);
    // cout << res << endl;
    if (res == res2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
int sumDigits(long long n) {
    int res = 0;
    while (n > 0) {
        int digit = n % 10;
        res += digit;
        n /= 10;
    }
    return res;
}
long long calSmith(long long n) {
    // int sqrtN = sqrt(n);
    // if (sqrtN * sqrtN == n) {
    //     res -= sumDigits(sqrtN);
    // }
    long long res = 0;
    long long x = n;
    for (int i = 2; i <= sqrt(n); i++) {
        
        while (n % i == 0 && i * i != x) {
            res += sumDigits(i);
            n /= i;
        }
        if (i * i == x) {
            res += sumDigits(i);
        }
    }
    
    if (n > 1) {
        res += sumDigits(n);
    }
    return res;
}