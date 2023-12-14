#include <bits/stdc++.h>
using namespace std;
int dem = 1;
class ThiSinh{
    public:
        string name;
        string id  = "TS";
        string dantoc;
        double score;
        int area;
        string status;
};
string chuanhoa(string s) {
    string res = "";
    string temp;
    stringstream ss(s);
    while (ss >> temp) {
        temp[0] = toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++) {
            temp[i] = tolower(temp[i]);
        }
        res += temp + " ";
    }
    res.pop_back();
    return res;
}
void read(ThiSinh &a) {
    string temp = to_string(dem);
    while (temp.size() != 2) {
        temp = "0" + temp;
    }
    a.id += temp;
    dem++;

    string ten;
    getline(cin, ten);
    a.name = chuanhoa(ten);
    cin >> a.score;
    cin.ignore();
    getline(cin, a.dantoc);
    cin >> a.area;
    cin.ignore();
    if (a.area == 1) {
        a.score += 1.5;
    } else if (a.area == 2) {
        a.score += 1.0;
    }
    if (a.dantoc != "Kinh") {
        a.score += 1.5;
    }
    if (a.score >= 20.5) {
        a.status = "Do";
    } else {
        a.status = "Truot";
    }
//    cout << a.id << " " << a.name << " " << a.score << " " << a.status << endl;

}
void print(ThiSinh a){
    cout << a.id << " " << a.name << " " << a.score << " " << a.status << endl;
}
bool cmp(ThiSinh a, ThiSinh b) {
    if (a.score == b.score) {
        return a.id < b.id;
    }
    return a.score > b.score;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    ThiSinh *dsts = new ThiSinh[n];
    for (int i = 0; i < n; i++) {
        read(dsts[i]);
    }
    sort(dsts, dsts + n, cmp);
    for (int i = 0; i < n; i++) {
    	print(dsts[i]);
	}
}
int main () {
    freopen("input.txt", "r", stdin);

    testCase();
}