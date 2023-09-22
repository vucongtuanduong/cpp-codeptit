#include <iostream>
using namespace std;
void testCase();
void init(int x[], int n);
bool isFinal(int x[], int n);
void genNext(int x[], int n);
void display(int x[], int n);
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
    int x[100];
    init(x, n);
    while (!isFinal(x, n)) {
        display(x, n);
        genNext(x, n);
    }
    display(x, n);
}
void init(int x[], int n) {
    for (int i = 1; i <= n; i++) {
        x[i] = 0;
    }
}
bool isFinal(int x[], int n) {
    for (int i = 1; i <= n; i++) {
        if (x[i] == 0) {
            return false;
        }
    }
    return true;
}
void genNext(int x[], int n) {
    int t = n;
    while (x[t] == 1) {
        t--;
    }
    x[t] = 1;
    for (int i = t + 1; i <= n; i++) {
        x[i] = 0;
    }
}
void display(int x[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << x[i];
    }
    cout << " ";
}