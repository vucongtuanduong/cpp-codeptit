#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name;
    string dob;
    string id;

};
int cmp(SinhVien a, SinhVien b) {
    return a.id > b.id;
}
SinhVien s[10000];
int current = 0;
void c1(){
    int query;
    cin >> query;
    for (int i = 0; i < query; i++) {
        cin >> s[current].id;
        getline(cin, s[current].name);
        getline(cin, s[current].dob);
        cout << s[current].id << " " << s[current].name << " " << s[current].dob << endl;
        current++;
    }
    sort(s, s + current,cmp);
}
void c2() {
    string input;
    getline(cin, input);
    int ok = 0;
    for (int i = 0; i < current; i++) {
        if (s[i].name == input) {
            cout << s[i].id << " " << s[i].name << " " << s[i].dob << endl;
            ok = 1;
        }
    }
    if (ok == 0) {
        cout << "-1";
    }
}
void testCase() {
    int choice;
    cin >> choice;
    cin.ignore();
    switch(choice) {
        case 1:
            c1();
        case 2:
            c2();
        case 3:
            break;
    }
}

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        testCase();
        cout << endl;
    }
}
