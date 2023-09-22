#include <iostream>
using namespace std;
void testCase();
void init(int x[], int n, int k);
bool isFinal(int x[], int n, int k);
void genNext(int x[], int n, int k);
void display(int x[], int n, int k);
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
    int n, k;
    cin >> n >> k;
    int x[100];
    init(x, n, k);
    while (!isFinal(x, n, k)) {
        display(x, n, k);
        genNext(x, n, k);
    }
    display(x, n, k);
}
void init(int x[], int n, int k) {
    for (int i = 1; i <= k; i++) {
        x[i] = i;
    }
}
bool isFinal(int x[], int n, int k) {
    for (int i = 1; i <= k; i++) {
        if (x[i] != (n - k + i)) {
            return false;
        }
    }
    return true;
}
void genNext(int x[], int n, int k) {
    int t = k;
    while (x[t] == (n - k + t)) {
        t--;
    }
    x[t]++;
    for (int i = t + 1; i <= k; i++) {
        x[i] = x[i - 1] + 1;
    }
}
void display(int x[], int n, int k) {
    for (int i = 1; i <= k; i++) {
        cout << x[i];
    }
    cout << " ";
}