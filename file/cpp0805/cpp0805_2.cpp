#include <bits/stdc++.h>
using namespace std;

void testCase() {
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");
    // ofstream out("PTIT.out");
    string s;
    
    map<string,int> mp;
    map<string,int> mp2;
    set<string> s1,s2;
    while (getline(in1, s)) {
        string temp;
        stringstream ss(s);
        while (ss >> temp) {
            for (int i =0 ;i  < temp.size(); i++) {
                temp[i] = tolower(temp[i]);
            }
            s1.insert(temp);
        }
        // mp[stoi(s)]++;
    }
    while (getline(in2, s)) {
        string temp;
        stringstream ss(s);
        while (ss >> temp) {
            for (int i =0 ;i  < temp.size(); i++) {
                temp[i] = tolower(temp[i]);
            }
            s2.insert(temp);
            

        }
        // mp[stoi(s)]++;
    }
    for (auto x : s1) {
        mp[x]++;
    }
    for (auto x : s2) {
        if (mp[x] >= 1) {
            mp2[x]++;
        }
        mp[x]++;
    }
    for (auto x : mp) {
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : mp2) {
        cout << x.first << " ";
    }
    in1.close();
    in2.close();
    // out.close();
}
int main () {


    testCase();
}