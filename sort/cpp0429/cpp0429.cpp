#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
// #include <bits/stdc++.h>
using namespace std;
void testCase();
void testCase2();
int main () {
    testCase2();
}
void testCase() {
    int n, k, b;
    cin >> n >> k >> b;
    int c = b + 1;
    int a[c];
    for (int i = 0; i < b; i++) {
        cin >> a[i];
    }
    a[b] = n;
    sort(a, a + c);
    vector<int>x;
    vector<int>res;
    int count = 0;
    for (int i = 0; i < b; i++) {
        x.push_back(a[i + 1] - a[i]);
    }
    for (int i = 0; i < x.size() - 1; i++) {
        int temp = x[i + 1] - x[i];
        if (temp >= k) {
            count++;
        }
    }
    cout << count;
}
void testCase2() {
    int n,b,k;
    cin >> n >> k >> b;
    int a[n];
    for (int i = 1; i <= n; i++) {
        a[i] = 1;//work good
    }
    for (int i = 0; i < b; i++) {
        int temp ;
        cin >> temp;
        a[temp] = 0;//broken
    }
    int min = INT_MAX;
    for (int i = 1; i <= n - k + 1; i++) {
        int sum = 0;
        for (int j = i; j <= i + k - 1; j++) {
            if (a[j] == 0) {
                sum++;
            }
        }
        if (sum < min) {
            min = sum;
        }
    }
    cout << min << endl;
}