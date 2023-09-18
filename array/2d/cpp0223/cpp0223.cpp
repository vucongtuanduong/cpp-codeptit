#include <iostream>
using namespace std;
void testCase();
void testCase2();
void testCase3();
int main () {
    int t;
    cin >> t;
    while(t--) {
        testCase2();
        cout << endl;
    }
}
void testCase() {
        int rows, columns;
        cin >> rows >> columns;
        int a[rows][columns];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cin >> a[i][j];
            }
        }
        int rb = 0, re = rows - 1, cb = 0, ce = columns - 1;
        if (rows == columns) {
            while(rb <= re && cb <= ce) {
                for (int i = cb; i <= ce; i++) {
                    cout << a[rb][i] << " ";
                }
                for (int i = rb + 1; i <= re; i++) {
                    cout << a[i][ce] << " ";
                }
                for (int i = ce - 1; i >= cb; i--) {
                    cout << a[re][i] << " ";
                }
                for (int i = re - 1; i >= rb + 1; i--) {
                    cout << a[i][cb] << " ";
                }
                rb++;
                cb++;
                re--;
                ce--;
            }
        } else {
            while(rb <= re && cb <= ce) {
                for (int i = cb; i < ce; i++) {
                    cout << a[rb][i] << " ";
                }
                for (int i = rb; i < re; i++) {
                    cout << a[i][ce] << " ";
                }
                for (int i = ce; i > cb; i--) {
                    cout << a[re][i] << " ";
                }
                for (int i = re; i > rb; i--) {
                    cout << a[i][cb] << " ";
                }
                rb++;
                cb++;
                re--;
                ce--;
            }
        }
        
}
void testCase3() {
    int rows, columns;
    cin >> rows >> columns;
    int a[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }
    int rb = 0, re = rows - 1, cb = 0, ce = columns - 1;
    
    while(rb < re && cb < ce) {
        for (int i = cb; i < ce; i++) {
            cout << a[rb][i] << " ";
        }
        for (int i = rb; i < re; i++) {
            cout << a[i][ce] << " ";
        }
        for (int i = ce; i > cb; i--) {
            cout << a[re][i] << " ";
        }
        for (int i = re; i > rb; i--) {
            cout << a[i][cb] << " ";
        }
        rb++;
        cb++;
        re--;
        ce--;
    }
    if (rb == re && cb == ce) {
        cout << a[rb][cb] << " ";
    } else if (rb == re && cb < ce) {
        for (int i = cb; i <= ce; i++) {
            cout << a[rb][i] << " ";
        }
    } else if (cb == ce && rb < re) {
        for (int i = rb; i <= re; i++) {
            cout << a[i][cb] << " ";
        }
    }
}
void testCase2() {
int rows, columns;
    cin >> rows >> columns;
    int a[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }
    int rb = 0, re = rows - 1, cb = 0, ce = columns - 1;
    
        while(rb <= re && cb <= ce) {
            for (int i = cb; i < ce; i++) {
                cout << a[rb][i] << " ";
            }
            for (int i = rb; i < re; i++) {
                cout << a[i][ce] << " ";
            }
            for (int i = ce; i > cb; i--) {
                cout << a[re][i] << " ";
            }
            for (int i = re; i > rb; i--) {
                cout << a[i][cb] << " ";
            }
            rb++;
            cb++;
            re--;
            ce--;
        }
}