#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Time{
    int hour;
    int minute;
    int second;
};
vector<Time> v;
void scan(Time a[], int n) {
    for (int i =0 ; i < n; i++) {
        // Time a;
        cin >> a[i].hour >> a[i].minute >> a[i].second;
//		cin >> v[i].hour >> v[i].minute >> v[i].second;
		// v.push_back(a);
    }
}
bool sx(Time a, Time b) {
    if (a.hour == b.hour) {
        if (a.minute == b.minute) {
            return a.second < b.second;
        }
        return a.minute < b.minute;
    }
    return a.hour < b.hour;
}
void sapxep(Time a[], int n) {
    
    for (int i = 0; i < n; i++) {
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end(), sx);
}
void in(Time a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i].hour << " " << v[i].minute << " " << v[i].second << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    int n;
    cin >> n;
    Time a[n];
    scan(a, n);
    sapxep(a, n);   
    in(a, n);
}