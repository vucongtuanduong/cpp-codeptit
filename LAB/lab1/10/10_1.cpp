#include <iostream>
#include <map>
#include <sstream>
using namespace std;
void testCase();
int countWords(string s) {
    int res =0 ;
    string temp;
    stringstream ss(s);
    while (ss >> temp) {
        res++;
    }
    return res;
}


void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> res;
    string s, temp;
    bool isTopic = true;
    bool ok = true;
    string topic;
    while (getline(cin, s)) {
        
        if (isTopic == true && ok == true) {
            res[s] = 0;
            topic = s;
            isTopic = false;
            ok = false;
        } else if (isTopic == true && ok == false) {
            res[s] = 0;
            topic = s;
            isTopic = false;
        } else {
            if (countWords(s) != 0) {
                res[topic]++;
            }
            
        }
        int n = countWords(s);
        if (n == 0) {
            isTopic = true;
        }
        

    }
    for (auto x : res) {
        cout << x.first << ": " << x.second << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
    testCase();
    return 0;
}