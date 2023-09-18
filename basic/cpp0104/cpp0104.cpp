#include <iostream>

using namespace std;
void testCase();
long long factorial(int n);
int main () {
	testCase();
}
void testCase() {
    int n;
    cin >> n;
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += factorial(i);
    }
    cout << res;
}
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}