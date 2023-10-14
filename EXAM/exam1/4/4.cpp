#include <bits/stdc++.h>
using namespace std;
#define ll long long
void testCase();
void testCase2();
ll sum(ll a, ll b);
int isPalindrome(long long n) ;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase2();
}
ll sum(ll a, ll b) {
    int n = b - a + 1;
	return n * (b + a) / 2;
}
int isPalindrome(long long n) {
    long long res = 0;
    long long x = n;
    while (x > 0) {
        res = res * 10 + (n % 10);
        x /= 10;
    }
    return (res == n);
}
void testCase() {
    int n;
    cin >> n;
    long long right = pow(10, n) - 1;
    long long left = pow(10, n - 1);
    long long res = 0;
    for (long long i = left; i <= right; i++) {
        if (isPalindrome(i)) {
            res += i;
        }
    }
    cout << res;

}
void testCase2() {
    int n;
	cin >> n;

	ll tong = 0;
	ll k = n / 2;
	ll left = pow(10, k - 1);
	ll right = pow(10, k) - 1;
	ll tmp = pow(10, k - 1) - 1;
	
	if (n % 2 == 0) {
		tong = sum(left, right) * pow((ll)10, k) + sum(1, right) - sum(1, tmp) * 10;
	}
	else {
		tong = sum(left * 10, right * 10 + 9) * pow((ll)10, k) + (sum(1, right) - sum(1, tmp) * 10) * 10;
	}

	cout << tong;


}