#include <bits/stdc++.h>
using namespace std;
class Nguoi{
    public:
        string name;
        string firstName;
        string middleName;
        string lastName;
        string phone;
        string date;
        void setLastName() {
            stringstream ss(this->name);
            string temp;
            while (ss >> temp) {
                this->lastName = temp;
            }
        }
        void setMiddleName() {
            int index = this->name.find(this->lastName);
            string s = this->name.substr(0, index);
            string temp;
            stringstream ss(s);
            while (ss >> temp) {
                this->middleName = temp;
            }
        }
        void setFirstName() {
            int index = this->name.find(this->middleName);
            this->firstName = this->name.substr(0, index - 1);
        }
};
bool cmp(Nguoi a, Nguoi b) {
    if (a.lastName == b.lastName) {
        return a.firstName < b.firstName;
    }
    return a.lastName < b.lastName;
}
void testCase() {
    string s;
    vector<string>data;
    while (getline(cin, s)) {
        data.push_back(s);
    }
    int i = 0;
    string ngay;
    vector<Nguoi> v;
    while (i < data.size()) {
        
        if (data[i].find("Ngay") != -1) {
            ngay = data[i].erase(0, 5);
            i++;
        } else {
            Nguoi a;
            a.name = data[i];
            i++;
            a.phone = data[i];
            i++;
            a.date = ngay;
            a.setLastName();
            a.setMiddleName();
            a.setFirstName();
            v.push_back(a);
        }
    }

    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        cout << x.name << ": " << x.phone << " " << x.date << endl;
    }
}
int main () {
    freopen("SOTAY.txt", "r", stdin);

    testCase();
}