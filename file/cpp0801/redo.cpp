#include <iostream>
#include <fstream>
using namespace std;
void testCase();
int main () {
    testCase();
}
void testCase() {
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("PTIT.in", ios::in);
    fileOut.open("PTIT.out", ios::out);
    string output;
    while(!fileIn.eof()) {
        getline(fileIn, output);
        fileOut << output << endl;
    }
    fileIn.close();
    fileOut.close();
}