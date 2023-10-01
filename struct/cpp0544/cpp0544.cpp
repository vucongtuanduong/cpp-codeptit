#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define PI 3.141592653589793238
struct triangle{
    double a,b,c;
    double r;
    double s;
    // double p;
};
struct point{
    double x, y;
};
void testCase();
bool isTriangle(triangle a);
triangle getTriangle(point a, point b, point c);
void getR(triangle &x);
void getS(triangle &x);
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
    // testCase();
}
void testCase() {
    point a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    triangle x = getTriangle(a, b, c);
    if (isTriangle(x)) {
        getS(x);
        getR(x);
        double res = PI * x.r * x.r;
        cout << fixed << setprecision(3) << res ;
    } else {
        cout << "INVALID";
    }
    
}
triangle getTriangle(point a, point b, point c) {
    triangle t;
    t.a = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    t.b = sqrt((a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y));
    t.c = sqrt((b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y));
    // cout << t.a << " " << t.b << " " << t.c << endl;
    return t;
}
bool isTriangle(triangle x) {
    if (x.a + x.b > x.c && x.a + x.c > x.b && x.b + x.c > x.a) {
        return true;
    }
    return false;
}
void getR(triangle &x) {
    x.r = 1.0 * (x.a * x.b * x.c) / (4.0 * x.s);
    // cout << "R: " << x.r << endl;
}
void getS(triangle &x) {
    x.s = 1.0 * 1 /4 * sqrt((x.a + x.b + x.c) * (x.a + x.b - x.c) * (x.b + x.c - x.a) * (x.c + x.a - x.b));
    // cout << "S: " << x.s << endl;

}