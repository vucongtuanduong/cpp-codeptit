#include <iostream>
#include <algorithm>
using namespace std;
struct DoiThi{
    int id;
    int share;
    int interact;
    double score;
};
bool cmp(DoiThi a, DoiThi b) {
    if (a.score == b.score) {
        return a.id < b.id;
    }
    return a.score > b.score;
}
bool cmp2(DoiThi a, DoiThi b) {
    return a.id < b.id;
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
        a[i].score =  a[i].share * 0.7 + a[i].interact * 0.3;
    }
    sort(a, a + n, cmp);
    sort(a, a + 7, cmp2);
    for (int i = 0; i < 7; i++) {
        cout << a[i].id << " ";
    }
}