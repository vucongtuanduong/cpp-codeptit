#include <iostream>
#include <cmath>
using namespace std;
void testCase();
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
void testCase() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        int countIn = 0;
        while (n % i == 0) {
            countIn++;
            count++;
            if (countIn == 2) {
                cout << "0";
                return ;
            }
            n /= i;
        }
    }
    if (n > 1) {
        count++;
    }
    if (count == 3) {
        cout << "1";
        
    } else {
        cout << "0";
    }
}