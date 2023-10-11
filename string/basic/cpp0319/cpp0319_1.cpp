#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void testCase();
int main (){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase (){
    int m, s;
    cin >> m >> s;
    string max = "", min = "";
    string res('0', m);
    if (s == 0 && m == 1) {
        cout << "0 0";
        
    } else if (s < 1 || s > (9 * m)) {
        cout << "-1 -1";
        
    } else {
        int sum = s;
        while (m) {
            if (sum > 9) {
                max += '9';
                sum -= 9;
            } else {
                max += to_string(sum);
                sum = 0;
            }
            m--;
        }
        min = max;
        reverse(min.begin(), min.end());
        if (min[0] == '0') {
            int i = 1;
            min[0] = '1';
            while (min[i] == '0') {
                i++;
            }
            min[i] -= 1;
          
        }
    }
    cout << min << " " << max;
}