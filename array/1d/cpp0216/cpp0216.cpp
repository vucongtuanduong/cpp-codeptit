#include <iostream>
using namespace std;
void testCase();
void testCase2();
void testCase3();
void testCase4();
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase4();
        cout << endl;
    }
}
void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l ,r;
    cin >> l >> r;
    if (r - l < 2) {
        cout << "No";
        return;
    }
    bool increase = true;
    bool decrease = false;
    int change = 0;
    for (int i = l + 1; i <= r; i++) {
        if (a[i] < a[i - 1] && increase == true) {
            increase = false;
            decrease = true;
            change++;
        } else if (a[i] > a[i - 1] && decrease == true) {
            cout << "No";
            return;
        }
    }
    if (change != 0) {
        cout << "Yes";
    }
    
}
void testCase2() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l ,r;
    cin >> l >> r;
    if (r - l < 2) {
        cout << "No";
        return;
    }
    bool increase = true;
    bool decrease = false;
    int change = 0;
    for (int i = l + 1; i <= r; i++) {
        if (a[i] < a[i - 1] && increase == true) {
            increase = false;
            decrease = true;
            change++;
        } else if (a[i] > a[i - 1] && decrease == true) {
            cout << "No";
            return;
        } 
    }
    // if (change != 0) {
    //     cout << "Yes";
    // }
    if (increase == true || decrease == false) {
        cout << "No";
    } else {
        cout << "Yes";
    }
}
void testCase3() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l ,r;
    cin >> l >> r;
    if (r - l < 2) {
        cout << "No";
        return;
    }
    bool increase = true;
    bool decrease = false;

    for (int i = l + 1; i <= r; i++) {
        if (a[i] < a[i - 1] && increase == true) {
            increase = false;
            decrease = true;
        } else if (a[i] > a[i - 1] && decrease == true) {
            cout << "No";
            return;
        } else if (a[i] == a[i - 1]) {
            cout << "No";
            return;
        }
    }
    if (increase == true || decrease == false) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    
}
void testCase4(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l ,r;
    cin >> l >> r;
    bool decrease = false;
    for (int i = l; i < r; i++) {
        if (a[i] >= a[i + 1]) {
            decrease = true;
        } else {
            if (decrease == true) {
                cout << "No";
                return;
            }
        }
    }
    cout << "Yes";
}