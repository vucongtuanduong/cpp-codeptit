#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;
const int NUM_QUESTIONS = 15;
void testCase();
void stripSpace(string &s);
void checkAns(string test, string res);
int main () {
	int t;
	cin >> t;
	while (t--) {
		testCase();
		cout << endl;
	}
}
void testCase() {
	string id;
    cin >> id;
    string test;
    string res_1 = "ABBADCCABDCCABD";
    string res_2 = "ACCABCDDBBCDDBB";
    if (id == "101") {
        getline(cin ,test);
        checkAns(test, res_1);
    } else if (id  == "102") {
        getline(cin ,test);
        checkAns(test, res_2);
    }
}
void stripSpace(string &s) {
    int n = s.length();
    int i = 0;
    while (i < n) {
        if (s[i] == ' ') {
            s.erase(i , 1);
            n = s.length();
        }
        i++;
    }
    // cout << n;
}
void checkAns(string test, string res_1) {
    stripSpace(test);
    int n = test.length();
    double res = 0;
    // cout << n << endl;
    // cout << test;
    for (int i = 0; i < n; i++) {
        if (test[i] == res_1[i]) {
            res += 1;
            // cout << res;
        }
        // cout << test[i];
        // cout << res_1[i];
        // cout << endl;
    }
    res = 10.0 * res / NUM_QUESTIONS;
    cout << fixed << setprecision(2) << res;
}