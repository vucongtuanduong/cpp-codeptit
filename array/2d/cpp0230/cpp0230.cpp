#include <bits/stdc++.h>
using namespace std;
void testCase();

void testCase2();//bai cua TQB
int main () {

        testCase();

        

}
void testCase() {
    int n;
    cin >> n;
    

    int a[n][3];
    int res = 0;
    for (int i =0 ; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i =0 ; i < n; i++) {
        int num0 = 0, num1 = 1;
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 1) {
                num1++;
            } else {
                num0++;
            }
        }
        if (num1 > num0) {
            res++;
        }
    }
    cout <<res;

}

void testCase2() {
    
} 