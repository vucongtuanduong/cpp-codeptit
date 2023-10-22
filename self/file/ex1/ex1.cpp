#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main () {
    fstream fp1;
    fp1.open("A.txt");
    fstream fp2;
    fp2.open("B.txt");
    int n;
    cin >> n;
    cin.ignore();
    
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        fp1 << s << endl;
    }
    fp1.close();
    fp1.open("A.txt");
    while (!fp1.eof()) {
        string s;
        getline(fp1, s);
        fp2 << s << endl;
    }
    
    fp2.close();
}
