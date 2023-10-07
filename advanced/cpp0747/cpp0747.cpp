#include <iostream>
using namespace std;
void testCase();

int main ( ){
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
void testCase() {
    string s;
    cin >> s;
    string temp = "100";
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.find(temp) != -1) {
            s.erase(s.find(temp), 3);
            count += 3;
        }
    }
    cout << count;
}