#include <iostream>
#include <stack>
using namespace std;
void testCase();
int main ( ){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        testCase();
        cout << endl;
    }
}
void testCase() {
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == 'D') {
            st.push(i + 1);
        } else {
            cout << i + 1;
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
    }
}