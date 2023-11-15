#include <iostream>
using namespace std;
const char *STR = "100";
void testCase();

void testCase() {
    string s;
    cin >> s;
    int count = 0;
    int index = 0;
    while (true) {
        index = s.find(STR);
        if (index == -1) {
            break;
        }
        s.erase(index, 3);
        count+=3;
    }
    cout << count;
}
int main ( ){
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