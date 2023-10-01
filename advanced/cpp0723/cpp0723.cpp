#include <iostream>
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
    string s;
    cin >> n >> s;
    int d[10] = {0};
    for (auto x : s) {
        //prime numbers you just multiply them
        if (x == '2') {
            d[2]++;
        } else if (x == '3') {
            d[3]++;
        } else if (x == '5') {
            d[5]++;
        } else if (x == '7') {
            d[7]++;
        } else if (x == '4') {
            //4! = 4 * 3! * 2 and 4! = 2! * 2!
            d[3]++;
            d[2]+= 2;
        } else if (x == '6') {
            //6! = 6 * 5! and 
            d[5]++;
            d[3]++;
        } else if (x == '8') {
            d[7]++;
            d[2] += 3;
        } else if (x == '9') {
            d[7]++;
            d[3] += 2;
            d[2]++;
        }
    }   
    for (int i = 9; i >= 2; i--) {
        for (int j = 1; j <= d[i]; j++) {
            cout << i;
        }
    }
}
