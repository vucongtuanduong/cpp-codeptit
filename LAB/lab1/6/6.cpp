#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <climits>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
void testCase();
void testCase2();
void getScore(int &n, double &mark);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    // cin.ignore();
    while (t--) {
        testCase2();
        cout << endl;
    }

    // testCase();
    
}
void testCase2() {
    int numRead, numListen;
    double read,listen,speak,write;
    cin >> numRead >> numListen >> speak >> write;
    getScore(numRead, read);
    getScore(numListen, listen);
    double tong = read + listen + speak + write;
    double average = tong / 4.0;
    double decimal = average - (int)average;
    if (decimal < 0.25) {
        average = (int)average;
    } else if (decimal >= 0.25 && decimal <= 0.5 || decimal >= 0.5 && decimal < 0.75) {
        average = (int)average + 0.5;
    } else if (decimal >= 0.75) {
        average = (int)average + 1;
    }
    cout << fixed << setprecision(1) << average;
}
void testCase() {
    int  numRead, numListen;
    double read,listen, speak, write;
    cin >> numRead >> numListen >> speak >> write;
    getScore(numRead, read);
    getScore(numListen, listen);
    // cout << "read: " << read << endl;
    // cout << "listen: " << listen << endl;
    double tong = (read + listen + speak + write);
    // cout << "tong: " << tong << endl;
    // cout << "average: " << (double)(tong / 4.0) << endl;
    double average = (double)(tong / 4.0) + 0.000;
    // vector<double> v;
    // v.push_back(read);
    // v.push_back(listen);
    // v.push_back(speak);
    // v.push_back(write);
    // average = accumulate(v.begin(), v.end(), 0.0) / v.size();
    double decimal = average - (int)average;
    // cout << decimal << endl;
    // cout << "average: " << average << endl;
    if (decimal >= 0.25 && decimal < 0.5) {
        decimal = 0.5;
        average = (int)average + decimal;
    } else if (decimal >= 0.75) {
        average =  double((int)average + 1.0);
    } else if (decimal == 0.5) {
        average = decimal + (int)average;
    } 
    else {
        average = round(average);
    }
    cout << fixed << setprecision(1) << average;
}
void getScore(int &n, double &mark) {
    if (n >= 3 && n <= 4) {
        mark = 2.5;
    } else if (n >= 5 && n <= 6) {
        mark = 3.0;
    } else if (n >= 7 && n <= 9) {
        mark = 3.5;
    } else if (n >= 10 && n <= 12) {
        mark = 4.0;
    } else if (n >= 13 && n <= 15) {
        mark = 4.5;
    } else if (n >= 16 && n <= 19) {
        mark = 5.0;
    } else if (n >= 20 && n <= 22) {
        mark = 5.5;
    } else if (n >= 23 && n <= 26) {
        mark = 6.0;
    } else if (n >= 27 && n <= 29) {
        mark = 6.5;
    } else if (n >= 30 && n <= 32) {
        mark = 7.0;
    } else if (n >= 33 && n <= 4) {
        mark = 7.5;
    } else if (n >= 35 && n <= 36) {
        mark = 8.0;
    } else if (n >= 37 && n <= 38) {
        mark = 8.5;
    } else if (n >= 39 && n <= 40) {
        mark = 9.0;
    }
    
 
}
 