#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string output;
    ifstream fileIn ("PTIT.in" ,ios::in);
    ofstream fileOut("PTIT.out", ios::out);
    while (!fileIn.eof()) {
        getline(fileIn, output);
        fileOut << output;
        fileOut << "\n";
    }
    fileIn.close();
    fileOut.close();
}