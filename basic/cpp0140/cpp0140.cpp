#include <iostream>
#include <cmath>
using namespace std;
void testCase();
long long sumDivisors(long long n);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    long long n;
    cin >> n;
    if (n > 1e12) {
        cout << "0";
        return ;
    }
    if(sumDivisors(n)) cout << "1";
    else cout << "0";
}
long long sumDivisors(long long n){
    long long res = 1;
    double sqrtN = sqrt(n);
    for (int i = 2; i < sqrtN; i++) {
        if (n % i == 0) {
            res += i;
            res += n / i;
        }
    }
    if ((int)sqrtN *  (int)sqrtN == n) {
        res += sqrtN;
    }
    return res == n;
}