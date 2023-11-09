#include <iostream>
#include <algorithm>
using namespace std;
struct DoiThi{
    int id;
    double share;
    double interact;
};
bool cmp(DoiThi a, DoiThi b) {
    if (a.share + a.interact == b.share + b.interact) {
        return a.id < b.id;
    }
    return (a.share + a.interact > b.share + b.interact);
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    DoiThi a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].share >> a[i].interact;
        a[i].share *= 0.7;
        a[i].interact *= 0.3;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < 7; i++) {
        cout << a[i].id << " ";
    }
}