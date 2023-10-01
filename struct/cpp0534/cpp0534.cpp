#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct text {
    string number;
    int count = 0;
};
int isPalindrome(string s);
void testCase();
bool cmp(text a, text b);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    vector<text> a;
    string s;
    while (cin >> s) {
        if (isPalindrome(s)) {
            text temp;
            temp.number = s;
            a.push_back(temp);
        }
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (a[i].number == a[j].number) {
                a[i].count++;
            }
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++) {
        int x = 0;
        for (int j = 0; j < i; j++) {
            if (a[i].number == a[j].number) {
                x = 1;
                break;
            }
        }
        if (x == 0) {
            cout << a[i].number << " " << a[i].count << endl;
        }
    }
}
int isPalindrome(string s) {
    int n = s.size();
    if (n == 1) {
        return 0;
    }
    for (int i = 0; i <= n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}
bool cmp(text a, text b) {
    if (a.number.size() > b.number.size()) {
        return true;
    }
    if (a.number.size() == b.number.size() && a.number > b.number) {
        return true;
    }
    return false;
}