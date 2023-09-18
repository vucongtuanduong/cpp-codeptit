#include <bits/stdc++.h>
using namespace std;
void testCase();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int hang,cot;
    cin >> hang >> cot;
    int a[hang][cot];
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> v;
    for (int sum = 0; sum <= hang + cot - 2; sum++) {
        if (sum % 2 == 0)  {
            if (sum < hang) {
                int i = sum, j = 0;
                while (i >= 0 && i < hang && j >= 0 && j < cot) {
                    v.push_back(a[i][j]);
                    i--;
                    j++;
                }
            } else {
                int i = hang - 1, j = sum - hang + 1;
                while (i >= 0 && i < hang && j >= 0 && j < cot) {
                    v.push_back(a[i][j]);
                    i--;
                    j++;
                }
            }
        } else {
            if (sum < cot) {
                int i = 0, j = sum;
                while (i >= 0 && i < hang && j >= 0 && j < cot) {
                    v.push_back(a[i][j]);
                    i++;
                    j--;
                }
            } else {
                int i = sum - cot + 1, j = cot - 1;
                while (i >= 0 && i < hang && j >= 0 && j < cot) {
                    v.push_back(a[i][j]);
                    i++;
                    j--;
                }
            }
        }
    }
    for (auto x:v) {
        cout << x << " ";
    }
}