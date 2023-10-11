#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void testCase();

int main()
{
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
    return 0;
}

void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int d = a[n - 1] - a[0];
    vector<int> v;
    int res = 0;
    for (int i = 1; i <= sqrt(d); i++) {
        if (d % i == 0) {
            v.push_back(i);
            if (i * i != d) {
                v.push_back(d / i);
            }
        }
        
    }
    for (int i = 0; i < v.size(); i++) {
        int temp = a[0] % v[i];
        int j = 1;
        for (j = 1; j < n; j++) {
            if (a[j] % v[i] != temp) {
                break;
            }
        }
        if (j == n) {
            res++;
        }
    }
    cout << res;
}