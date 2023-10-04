#include <iostream>
#include <iomanip>
using namespace std;
struct Point{
    double x, y;
    void input() {
        cin >> x >> y;
    }
};
double area(Point a, Point b) {
    return (a.x * b.y - a.y * b.x);
}
void testCase () {
    int n;
    cin >> n;
    Point p[n + 1];
    for (int i = 0; i < n; i++) {
        p[i].input();
    }
    p[n] = p[0];//we have to calculate the area of the last and the first
    double res = 0;
    for (int i = 0; i < n; i++) {
        res += area(p[i], p[i + 1]);
    }
    res = 0.5 * abs(res);
    cout << fixed << setprecision(3) << res;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}