#include <iostream>
using namespace std;
void testCase();
long long sumDigits(string s);
long long sumDigits(long long n);
int check(string s);
int check(long long s);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    cin >> s;
    // if (sumDigits(s) == 9) {
    //     cout << "1";
    // } else {
    //     cout << "0";
    // }
    cout << check(s);
}
long long sumDigits(string s) {
    long long res = 0;
    for (int i = 0; i < s.size(); i++) {
        res += (s[i] - '0');
    }
    return res;
}
int check(string s) {
    if (s.size() == 1 && s == "9") {
        return 1;
    } else if (s.size() == 1 && s != "9") {
        return 0;
    } else {
        return check(to_string(sumDigits(s)));
    }
    
}
long long sumDigits(long long n) {
    long long res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int check(long long s) {

}