#include <bits/stdc++.h>
using namespace std;
class Gamer{
    public:
        string username;
        string password;
        string name;
        string hourIn;
        string hourOut;
        int playHours;
        int playMins;
        string playTime;
};
void testCase();
bool cmp(Gamer a, Gamer b);
//explicit
bool cmp(Gamer a, Gamer b) {
    if (a.playHours == b.playHours) {
        if (a.playMins == b.playMins) {
            return a.username < b.username;
        }
        return a.playMins > b.playMins;
    }
    return a.playHours > b.playHours;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    vector<Gamer> v;
    for (int i = 0; i < n; i++) {
        Gamer x;
        getline(cin, x.username);
        getline(cin, x.password);
        getline(cin, x.name);
        getline(cin, x.hourIn);
        getline(cin, x.hourOut);
        int gioVao, phutVao, gioRa, phutRa;
        gioVao = stoi(x.hourIn.substr(0, 2));
        gioRa = stoi(x.hourOut.substr(0,2));
        phutVao = stoi(x.hourIn.substr(3,2));
        phutRa = stoi(x.hourOut.substr(3, 2));
        int gioChoi = gioRa - gioVao;
        int phutChoi = phutRa - phutVao;
        if (phutChoi < 0) {
            phutChoi += 60;
            gioChoi -= 1;
        }
        x.playHours = gioChoi;
        x.playMins = phutChoi;
        x.playTime= to_string(gioChoi) + " gio " + to_string(phutChoi) + " phut";
        v.push_back(x);

    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].username << " " << v[i].password << " " << v[i].name << " " << v[i].playTime << endl;
    }
    
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
    
}