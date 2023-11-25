#include <iostream>
#include <cmath>
using namespace std;
void testCase();

//explicitly
void testCase (){
    int n;
    cin >> n;
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        int temp = 0;
        while (n % i == 0) {
            temp++;
            n /= i;
        }
        if (temp >= 2) {
            cout << "0";
            return;
        } else if (temp == 1) {
            res++;
        }
    }
    if (n > 1) {
        res++;
    }
    if (res == 3) {
        cout << "1";
    } else {
        cout << "0";
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}