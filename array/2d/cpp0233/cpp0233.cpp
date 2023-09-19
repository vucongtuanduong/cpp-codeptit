#include <iostream>
#include <vector>
using namespace std;
void testCase();
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
    int rows, columns; 
    cin >> rows >> columns;
    int a[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> res;
    int rb = 0, re = rows - 1, cb = 0, ce = columns - 1;
    while (rb < re && cb < ce) {
        for (int i = cb; i < ce; i++) {
            res.push_back(a[rb][i]);
        }
        for (int i = rb; i < re; i++) {
            res.push_back(a[i][ce]);
        }
        for (int i = ce; i > cb; i--) {
            res.push_back(a[re][i]);
        }
        for (int i = re; i > rb; i--) {
            res.push_back(a[i][cb]);
        }
        rb++;
        cb++;
        re--;
        ce--;
    }
    if (rb == re && cb == ce) {
        res.push_back(a[rb][cb]);
    } else if (rb == re && cb < ce) {
        for (int i = cb; i <= ce; i++) {
            res.push_back(a[rb][i]);
        }
    } else if (rb < re && cb == ce) {
        for (int i = rb; i <= re; i++) {
            res.push_back(a[i][cb]);
        }
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] <<" ";
    }
}