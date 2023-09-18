#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
void testCase2();
int main () {
    int t;
    cin >> t;
    while(t--) {
        testCase2();
        cout << endl;
    }
}
void testCase() {
    int rows , columns;
    cin >> rows >> columns;
    int a[rows][columns];
    int b[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < columns; j++) {
        b[0][j] = a[0][j];
        for (int i = 1; i < rows; i++) {
            if (a[i][j] == 0) {
                b[i][j] = 0;
            } else {
                b[i][j]= b[i - 1][j] + 1;
            }
        }
    }
    for (int i = 0; i < rows ; i++) {
        for (int j = 0; j < columns; j++) {
            cout << b[i][j] <<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        sort(b[i],b[i] + columns);
    }
    for (int i = 0; i < rows ; i++) {
        for (int j = 0; j < columns; j++) {
            cout << b[i][j] <<" ";
        }
        cout << endl;
    }
    int res  = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            res = max(res, b[i][j] * (columns - j));
            cout << "columns - j = " << (columns - j) << endl;
            cout << "b[i][j] = " << b[i][j] << endl;
            cout << b[i][j] * (columns - j) << endl;
        }
    }
    cout << res;
}
void testCase2()  {
    int rows , columns;
    cin >> rows >> columns;
    int a[rows][columns];
    int b[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < columns; j++) {
        b[0][j] = a[0][j];
        for (int i = 1; i < rows; i++) {
            if (a[i][j] == 0) {
                b[i][j] = 0;
            } else {
                b[i][j]= b[i - 1][j] + 1;
            }
        }
    }
    // for (int i = 0; i < rows ; i++) {
    //     for (int j = 0; j < columns; j++) {
    //         cout << b[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < rows; i++) {
        sort(b[i],b[i] + columns);
    }
    // for (int i = 0; i < rows ; i++) {
    //     for (int j = 0; j < columns; j++) {
    //         cout << b[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    int res  = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            res = max(res, b[i][j] * (columns - j));
            // cout << "columns - j = " << (columns - j) << endl;
            // cout << "b[i][j] = " << b[i][j] << endl;
            // cout << b[i][j] * (columns - j) << endl;
        }
    }
    cout << res;
}