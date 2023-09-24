#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
struct Hang{
    int id;
    string name, group;
    double buy, sell;
    double profit;
};
bool sx(Hang a, Hang b) {
    return a.profit > b.profit;
}
void nhap(Hang a[], int n) {
    for (int i = 0; i < n; i++) {
        cin.ignore();
        a[i].id = i + 1;
        getline(cin, a[i].name);
        getline(cin, a[i].group);
        cin >> a[i].buy >> a[i].sell;
        a[i].profit = a[i].sell - a[i].buy;
    }
}
vector<Hang> v;
void sapxep(Hang a[], int n) {
    for (int i = 0; i < n; i++) {
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end(), sx);
}
void in() {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].id << " " << v[i].name << " " << v[i].group << " " << fixed << setprecision(2) << v[i].profit << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    int n;
    cin >> n;
    // cin.ignore();
    Hang a[n];
    nhap(a, n);
    sapxep(a, n);
    in();
}