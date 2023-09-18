#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
struct point{
    double x;
    double y;
};
using namespace std;
void testCase();
double distance(point a, point b);
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    point a,b;
    cin >> a.x >> a.y >> b.x >> b.y;
    double res = distance(a, b);
    cout << fixed << setprecision(4) << res;
}
double distance(point a, point b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}
