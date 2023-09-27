#include <iostream>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
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
    int rb= 0 , re = rows -1, cb = 0, ce = columns - 1;
    while (rb < re && cb < ce) {
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
        re--;
        cb++;
        ce--;
    }
    if (rb == re && cb == ce) {
        cout << a[rb][cb];
    } else if (rb == re && cb < ce) {
        for (int i = cb; i <= ce; i++) {
            cout << a[rb][i] << " ";
        }
    } else if (rb < re && cb == ce) {
        for (int i = rb; i <= re; i++) {
            cout << a[i][cb] << " ";
        }
    }
}