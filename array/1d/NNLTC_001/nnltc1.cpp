#include <iostream>
#include <map>
using namespace std;

const int MAXLIST  = 10000;

void testCase();
struct list{
    int n;
    int nodes[MAXLIST];
};
list ds;
int main () {
    testCase();
}
void testCase() {
    map<int, int> m;
    int current = 0;
    int temp ;
    while (cin >> temp) {
        ds.nodes[current] = temp;
        current++;
        m[temp]++;
        ds.n = current;
    }
    for (int i = 0; i < current; i++) {
        if (m[ds.nodes[i]] > 0) {
            cout << ds.nodes[i] << " " << m[ds.nodes[i]] << endl;
            m[ds.nodes[i]] = 0;
        }
    }
}