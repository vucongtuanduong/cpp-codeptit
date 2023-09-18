#include <iostream>

using namespace std;
void testCase();
long long reverse(long long n);
bool checkEqual(long long n);
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
	if (checkEqual(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}       
long long reverse(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}    
bool checkEqual(long long n) {
    long long res = reverse(n);
    if (res == n) return true;
    return false;
}