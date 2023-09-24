#include <iostream>
#include <stack>
using namespace std;
void testCase();
void prev_permutation(int a[], int n);
void display(int a[], int n);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase(){ 
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    prev_permutation(a, n);
    display(a, n);
}
void prev_permutation(int a[], int n) {
    int t = n;
    int temp = a[t];
    t--;
    while (a[t] < temp) {
        temp = a[t];
        t--;
    }
    if (t == 0) {
        for (int i = 1; i <= n; i++) {
            a[i] = n - i + 1;
        }
        return;
    } 
    int min_index = t + 1;
    int min_sub = a[t] - a[t + 1];
    for (int i = t + 2; i <= n; i++) {
        int temp = a[t] - a[i];
        if (temp > 0 && temp < min_sub) {
            min_sub = temp;
            min_index = i;
        }
    }
    swap(a[t], a[min_index]);
    stack<int> st;
    for (int i = t + 1; i <= n; i++) {
        st.push(a[i]);
    }
    for (int i = t + 1; i <= n; i++) {
       	a[i] = st.top();
        st.pop();
    }
}
void display(int a[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    // cout << endl;
}