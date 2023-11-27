//https://www.hackerrank.com/contests/28tech-thi-thu-c-cuoi-ki-ptit-test-2-ngay-29112022/challenges/ham-ly-thuyet-so-chu-so-cuoi-cung-lon-nhat/problem
#include <bits/stdc++.h>
using namespace std;
class TaiKhoan{
    public:
        string mailName = "";
        string pass;
};
void testCase();
char tolower(char c);
//explicit
char tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    vector<TaiKhoan> a;
    map<string,int> dem;
    while (n--) {
        string s;
        getline(cin, s);
        TaiKhoan x;
        string temp;
        string duplicateMail = "";
        stringstream ss(s);
        vector<string> tokens;
        while (ss >> temp) {
            tokens.push_back(temp);
        }
        string password = tokens[tokens.size() - 1];
        if (password[0] == '0') {
            password.erase(0, 1);
            if (password[2] == '0') {
                password.erase(2 , 1);
            }
        } else {
            if (password[3] == '0') {
                password.erase(3, 1);
            }
        }
        while (password.find("/") != -1) {
            int index = password.find("/");
            password.erase(index, 1);
        }
        x.pass = password;
        // cout << x.pass << endl;

        tokens.erase(tokens.end() - 1);
        string lastName = tokens[tokens.size() - 1];
        for (int i = 0; i < lastName.size(); i++) {
            duplicateMail += tolower(lastName[i]);
        }
        tokens.erase(tokens.end() - 1);
        for (int i = 0; i < tokens.size(); i++) {
            duplicateMail += tolower(tokens[i][0]);
        }
        x.mailName += duplicateMail;
        if (dem[duplicateMail] >= 1) {
            x.mailName += to_string(dem[duplicateMail] + 1);
        }
        dem[duplicateMail]++;
        x.mailName += "@xyz.edu.vn";
        a.push_back(x);
    }   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i].mailName << endl;
        cout << a[i].pass << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}