#include <iostream>
#include <iomanip>
using namespace std;

void testCase();
void score(int num, double &score) {
    if (num >= 39 && num <= 40) {
        score = 9.0;
    } else if (num >= 37 && num <= 38) {
        score = 8.5;
    } else if (num >= 35 && num <= 36) {
        score = 8.0;
    } else if (num >= 33 && num <= 34) {
        score = 7.5;
    } else if (num >= 30 && num <= 32) {
        score = 7.0;
    } else if (num >= 27 && num <= 29) {
        score = 6.5;
    } else if (num >= 23 && num <= 26) {
        score = 6.0;
    } else if (num >= 20 && num <= 22) {
        score = 5.5;
    } else if (num >= 16 && num <= 19) {
        score = 5.0;
    } else if (num >= 13 && num <= 15) {
        score = 4.5;
    } else if (num >= 10 && num <= 12) {
        score = 4.0;
    } else if (num >= 7 && num <= 9) {
        score = 3.5;
    } else if (num >= 5 && num <= 6) {
        score = 3.0;
    } else if (num >= 3 && num <= 4) {
        score = 2.5;
    }
}

void testCase() {
    int numRead, numListen;
    double reading, listening, speaking,writing;
    cin >> numRead >> numListen >> speaking >> writing;
    score(numRead, reading);
    score(numListen, listening);
    // cout << reading << " " << listening << " ";
    double score = 1.0 * (reading + listening + speaking + writing) / 4;
    double decimal = score -(int)score;
    if (decimal >= 0.75) {
        score = (int)score + 1.0;
    } else if (decimal >= 0.25) {
        score = (int)score + 0.5;
    } else {
        score = (int)score;
    }
    cout << fixed << setprecision(1) << score;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}