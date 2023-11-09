#include <iostream>
#include <algorithm>
using namespace std;
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase () {
    string input;
    getline(cin, input);
    if (input.size() < 100) {
        cout << input;
        return;
    }
    int i = 0;
    string res = "";
    input += " ";
    while (i < 100) {
        res += input[i];
        i++;
    }
    if (input[99] != ' ' && input[100] != ' ') {
        int j = 99;
        while (res[j] != ' ') {
            res.pop_back();
            j--;
        }
    }
    cout << res;
}