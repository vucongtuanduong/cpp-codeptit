//https://www.hackerrank.com/contests/thi-thu-c-cuoi-ki-ptit-test-1/challenges/c-final-test-1-so-dep
#include <bits/stdc++.h>
using namespace std;
class MatHang{
    public:
       string id;
       string name;
       string brand;
       string donvi;
       int buyPrice;
       int sellPrice; 
       int profit;
};
map<string, int> dem;
void testCase();
char toupper(char c);
bool cmp(MatHang a, MatHang b);
//explicit
bool cmp(MatHang a, MatHang b) {
    if (a.profit == b.profit) {
        return a.id < b.id;
    }
    return a.profit > b.profit;
}
char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        c-= 32;
    }
    return c;
}
void testCase() {
    int n;
    cin >> n;
    vector<MatHang> res;
    cin.ignore();
    while (n--) {
        MatHang x;
        getline(cin, x.name);
        getline(cin, x.brand);
        getline(cin, x.donvi);
        string s, temp;
        getline(cin, s);
        stringstream ss(s);
        vector<string> price;
        dem[x.name]++;
        while (ss >> temp) {
            price.push_back(temp);
        }
        x.buyPrice = stoi(price[0]);
        x.sellPrice = stoi(price[1]);
        x.profit = x.sellPrice - x.buyPrice;
        for (auto i :dem) {
            if (i.first == x.name) {
                string temp1 = "";
                stringstream ss(x.name);
                string temp2 = to_string(i.second);
                string temp3;
                while (ss >> temp3) {
                	char c = temp3[0];
                    temp1 += toupper(c);
                }
                while (temp2.size() != 4) {
                    temp2 = "0" + temp2;
                }
                x.id = temp1 + temp2;
            }
        }
        // cout << x.id << endl;
        // cout << x.name << endl;
        // cout << x.brand << endl;
        // cout << x.donvi << endl;
        // cout << x.buyPrice << endl;
        // cout << x.sellPrice << endl;
        res.push_back(x);
    }
    sort(res.begin(), res.end(), cmp);
    for (int i  = 0; i < res.size(); i++) {
        cout << res[i].id << " " << res[i].name << " " << res[i].brand << " " << res[i].donvi << " " << res[i].buyPrice << " " << res[i].sellPrice << endl;
    }
}
int main () {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}