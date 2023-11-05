#include <iostream>
#include <algorithm>
using namespace std;
struct Person{
    int id;
    int count = 0;
};
bool cmp(Person a, Person b) {
    if (a.count == b.count) {
        return a.id < b.id;
    }
    return a.count > b.count;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int n, m;
    cin >> n >> m;
    Person a[100];

    for (int i = 0; i < m; i++) {
        a[i].id = i;
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x - 1].count++;
        // cout << a[x].count << endl;
    }
    sort(a, a + m, cmp);
    int max = a[0].count;

    int ok = 0;
    // for (int i = 0; i < m; i++) {
    //     cout << a[i].count << " ";
    // }
    // cout << endl;
    for (int i = 1; i < m; i++) {
        if (a[i].count != max) {
            ok = 1;
        }
    }
    if (ok == 0) {
        cout << "NONE";
    }
    else {
        cout << a[1].id + 1;
    }
}