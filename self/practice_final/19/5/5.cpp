#include <bits/stdc++.h>
using namespace std;
class Gamer{
    public:
        int power;
        int blood;
        string status;
        friend istream &operator >> (istream &in, Gamer &a) {
            vector<string> powerString, bloodString;
            string sucmanh, mau;
            getline(in, sucmanh);
            getline(in, mau);
            getline(in, a.status);
            stringstream ss(sucmanh);
            stringstream ss1(mau);
            string temp1, temp2;
            while (ss >> temp1) {
                powerString.push_back(temp1);
            }
            while (ss1 >> temp2) {
                bloodString.push_back(temp2);
            }
            a.power = stoi(powerString[2]);
            a.blood  = stoi(bloodString[2]);
            return in;
        }
};
bool isAlive(Gamer a) {
    if (a.power <= 0 || a.blood <= 0) {
        return false;
    }
    return true;
}
bool isDead(Gamer a) {
    return a.status == "DEAD";
}
void testCase() {
    Gamer a;
    cin >> a;
    int t;
    cin >> t;
    while (t--) {
        string event;
        cin >> event;
        if (event == "witch") {
            int pow;
            cin >> pow;
            if (!isDead(a)) {
                if (pow >= a.power) {
                    a.status = "DEAD";
                    a.blood = 0;
                    a.power = 0;
                } else {
                    a.power += 5;
                }
            }
            
        } else if (event == "mushroom"){
            if (!isDead(a)) {
                a.power -= 2;
                a.blood -= 15;
                if (!isAlive(a)) {
                    a.status = "DEAD";
                    a.blood = 0;
                    a.power = 0;
                }
            }
            
            
        } else if (event == "pea") {
            if (!isDead(a)) {
                a.power += 2;
                a.blood += 10;
            }
            
        } else if (event == "soldier") {
            int pow;
            cin >> pow;
            if (!isDead(a)) {
                if (pow >= a.power) {
                    a.status = "DEAD";
                    a.blood = 0;
                    a.power = 0;
                } else {
                    a.power += 7;
                    a.blood += 5;
                }
            }
            
        }
        cout << "POWER : " << a.power << endl;
        cout << "BLOOD : " << a.blood << endl;
        cout << a.status << endl;
        cout << "--------------------\n";
    }
}
int main () {
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    testCase();
}