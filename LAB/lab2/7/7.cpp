#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
const string DELIMITER = "?!";
void testCase();
void standard(string &s);
void toupper(char &c);
void tolower(char &c);
void changeDelimiter(string &s);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    string s,input = "";
    while (getline(cin, s)) {
    	input += s;
    	// input += ".";
	}
    getline(cin, input);
//    cout << input << endl;
    // changeDelimiter(input);
    stringstream ss(input);
    vector<vector<string>> res;
    
    string temp;
    int current = 0;
    while (getline(ss, temp, '.')) {
        standard(temp);
        stringstream sspace (temp);
        string tmp;
        vector<string> v;
        while (sspace >> tmp) {
            
			v.push_back(tmp);
			standard(v[0]);
            current++;
        }
//        standard(v[0]);
        res.push_back(v);
//        standard(res[0]);
    }
    for(int i = 0; i < res.size(); i++) {
        for(auto x : res[i]) {
            cout << x << " ";
        }
        // cout << ".";
        cout << endl;
    }
//     while (getline(ss, temp, '.')) {
//         standard(temp);
//         stringstream sspace (temp);
//         string tmp;
//         vector<string> v;
//         while (sspace >> tmp) {
            
// 			v.push_back(tmp);
// 			standard(v[0]);
//             current++;
//         }
// //        standard(v[0]);
//         res.push_back(v);
// //        standard(res[0]);
//     }
//     for(int i = 0; i < res.size(); i++) {
//         for(auto x : res[i]) {
//             cout << x << " ";
//         }
//         cout << ".";
//         cout << endl;
//     }
}
void standard(string &s) {
    toupper(s[0]);
    for (int i  = 1; i < s.size(); i++) {
        tolower(s[i]);
    }

}
void toupper(char &c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
}
void tolower(char &c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
}
void changeDelimiter(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '!' || s[i] == '?') {
            s[i] = '.';
        }
    }
}