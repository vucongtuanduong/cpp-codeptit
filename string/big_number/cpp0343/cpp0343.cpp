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


    // testCase();
}
void testCase() {
    string s,temp;
    getline(cin, s);
    stringstream ss(s);
    int total = 0, countEven = 0, countOdd = 0;
    while (ss >> temp) {
        total++;
        long long number = stoll(temp);
        if (number % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    if ( (total % 2 == 0 && countEven > countOdd) || (total % 2 == 1 && countOdd > countEven)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}   

void testCase2() {

}