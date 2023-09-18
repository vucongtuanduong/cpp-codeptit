#include <iostream>
#include <string>
using namespace std;
void testCase();

int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    string input;
    cin >> input;
    int index = input.find("084");

    for (int i = 0; i < 3; i++) {
        input.erase(index, 1);
        // i++;
        
    }
    cout << input;
}
