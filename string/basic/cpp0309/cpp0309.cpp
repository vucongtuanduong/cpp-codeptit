#include <bits/stdc++.h>
using namespace std;
void testCase();

void testCase2();//bai cua TQB
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
        
    }
}
void testCase() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    int count = 0;
    while (ss >> s) {
        count++;
    }
    cout << count;
}

void testCase2() {
    string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    int count =0;
    while(ss>>tmp){
        count+=1;
    }
    cout<<count<<endl;
}