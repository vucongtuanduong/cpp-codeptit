#include <iostream>
using namespace std;
void testCase();
string bigMul(string a, string b);
string bigSum(string a, string b);
int main(){ 
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
    // testCase();
     
}
void testCase() {
    string x, y;
    cin >> x >> y;

    string res = "0", temp1, temp2;
    for (int i = 0; i < x.size(); i++) {
        res.push_back('0');

        temp1.push_back(x[i]);

        int count = 0;
        temp2 = "";
        while (temp1.size() > y.size() || (temp1.size() == y.size() && temp1 > y)) {
            count++;
            temp1 = bigMul(temp1, y);
            while (temp1[0] == '0') {
                temp1.erase(0, 1);
            }
        }
        temp2 += to_string(count);
        res = bigSum(res, temp2);

    }
    if(temp1 == y) {
        res = bigSum(res,"1");
    }
    if (x.size() < y.size() || (x.size() == y.size() && x < y)) {
        cout << "0";
        return ;
    } else {
        while (res[0] == '0') {
            res.erase(0, 1);
        }
        cout << res;
    }
}
string bigSum(string a, string b) {
    if (a.size() < b.size()) {
        a.insert(0, b.size() - a.size(),'0');
    }
    if (b.size() < a.size()) {
        b.insert(0, a.size() - b.size(),'0');
    }
    string res = "";

    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        int temp = (a[i] - '0') + (b[i] - '0') + carry;
        carry = temp / 10;
        temp = temp % 10 + '0'; 
        res.insert(0, 1, temp);
        

    }
    if (carry) {
        res.insert(0, 1, (carry + '0'));
    }
    return res;

}
string bigMul(string a, string b) {
    // assume that b is always smaller than a
    while (a.size() != b.size()) {
        b.insert(0, "0");
    }
    string res = "";
    int x = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] >= b[i]) {
            x = a[i] - b[i];
        } else {
            x = a[i] - b[i] + 10 ;
            a[i - 1]--;
        }
        res.insert(0, to_string(x));
    }
    return res;
}