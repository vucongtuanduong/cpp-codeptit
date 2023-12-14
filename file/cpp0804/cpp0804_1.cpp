#include <bits/stdc++.h>
using namespace std;

void testCase() {
    ifstream in("VANBAN.in");
    // ofstream out("PTIT.out");
    string s;
    
    map<string,int> mp;
    while (getline(in, s)) {
        string temp;
        stringstream ss(s);
        while (ss >> temp) {
            for (int i =0 ;i  < temp.size(); i++) {
                temp[i] = tolower(temp[i]);
            }
            mp[temp]++;
        }
        // mp[stoi(s)]++;
    }
    for (auto x : mp) {
        cout << x.first << endl;
    }
    in.close();
    // out.close();
}
int main () {


    testCase();
}