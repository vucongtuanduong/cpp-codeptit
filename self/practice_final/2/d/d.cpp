//https://www.hackerrank.com/contests/thi-thu-c-cuoi-ki-ptit-test-1/challenges/c-final-test-1-problem-b-truy-van-tren-mang
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
class SinhVien;
map<string, SinhVien> svMap;
class SinhVien{
    public:
        string id;
        string name;
        map<string,int> log;
        string time;
        string ok;
        void nhap() {
            string input;
            string temp, temp2;
            getline(cin, input);
            stringstream ss(input);
            while (ss >> temp) {
                this->id = temp;
                break;
            }
            int index = input.find(temp);
            input.erase(index, index + temp.size() + 1);
            this->name = input;
            // cout << this->id << " " << this->name << endl;
            svMap[this->id] = *this;
        }
};
void testCase();

//explicit

void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    SinhVien *a = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        a[i].nhap();
    }
    int q;
    cin >> q;
    cin.ignore();
    for(int i = 0; i < q; i++) {
        string s;
        getline(cin, s);
        vector<string> res;
        stringstream ss(s);
        string temp;
        while (ss >> temp) {
            res.push_back(temp);

        }
        
        // cout << res[2] << " " << res[3] << endl;
        svMap[res[2]].log[res[3]]++;
    }
    vector<SinhVien> v;
    
    for (auto x: svMap) {
        // cout << x.second.id << " ";
        // for (auto xs : x.second.log) {
        //     cout << xs.first << " " << xs.second << endl;
        // }
        if (x.second.log["code.ptit.edu.vn"] >= 1) {
            x.second.ok = "OK";
        } else {
            x.second.ok = "FAIL";
        }
        if (x.second.log.size() != 1) {
            x.second.ok = "FAIL";
        }
        v.push_back(x.second);
    }
    for (auto s: v) {
        // for (auto x : s.log) {
        //     cout << x.first << " " << x.second << endl;
        // }
        cout << s.id << " " << s.name << " " << s.ok << endl;
    }
}
int main () {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin >> t;
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}