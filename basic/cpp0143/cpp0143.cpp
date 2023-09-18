#include <iostream>
using namespace std;

#define MAX 93
long long fibo[MAX];
void testCase();
void init();
int main () {
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    cout << fibo[n] << endl;
}
void init() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

}