#include <iostream>
#include <fstream>
using namespace std;

void freopen() {
    freopen("file.in", "r", stdin);
    freopen("file.out", "w", stdout);   
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}
void fp() {
    fstream fp1;
    fp1.open("file.in");
    int a, b;
    fp1 >> a >> b;
    fp1.close();
    fp1.open("file.out");
    cout << a + b;
    fp1.close();
}
void binary() {
    fstream fp1;
    fp1.open("file.in", ios::binary | ios::in);
    int a, b;
    fp1.read((char *)&a, sizeof(a));
    fp1.read((char *)&b, sizeof(b));
    fp1.close();
    fp1.open("file.out", ios::binary | ios::out);
    int c = a + b;
    fp1.write((char *)&c, sizeof(c));
    fp1.close();
}
int main () {
    // freopen();
    fp();
}