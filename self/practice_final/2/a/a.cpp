//https://www.hackerrank.com/contests/thi-thu-c-cuoi-ki-ptit-test-1/challenges/c-final-test-1-so-dep
#include <iostream>
using namespace std;
void testCase();

//explicit
void testCase() {
    string s;
    cin >> s;
    int index = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            continue;
        }
        index++;
        int digit = s[i] - '0';
        
        if ((index % 2 == 0 && digit % 2 == 0) || (index % 2 == 1 && digit % 2 == 1)) {
            continue;
        } else {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
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