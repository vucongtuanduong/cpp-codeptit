#include <bits/stdc++.h>
using namespace std;
class Dathuc{
    public:
        int heso = 0;
        int mu;
};
bool cmp(Dathuc a, Dathuc b) {
    return a.mu  < b.mu;
}
void testCase() {
    string s;
    getline(cin , s);
    vector<Dathuc> v;
    string temp;
    stringstream ss(s);
    map<int, int> mp;
    while (getline(ss, temp, '+')) {
        int t = 0;
        while (temp[t] == ' ') {
            temp.erase(t, 1);
        }
        string a1, a2;
        string temp1 = temp;
        // cout << "temp:" << temp << endl;
        for (int i = 0; i < temp1.size(); i++) {
            if (isdigit(temp1[i])) {
                a1 += temp1[i];
            } else {
                break;
            }
        }
        stringstream ssMu(temp);
        while (getline(ssMu, temp1, '^')) {
            a2 = temp1;
        }
        // cout << "a1: " << a1 << endl;
        // cout << "a2: " << a2 << endl;
        mp[stoi(a2)] += stoi(a1);
    }
    for (auto x : mp) {
        Dathuc a;
        a.mu = x.first;
        a.heso = x.second;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].heso << "x^" << v[i].mu;
        if (i != v.size() - 1) {
            cout << " + ";
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
}