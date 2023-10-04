#include <iostream>
using namespace std;
struct Point{
    int x,y,z;
    void input() {
        cin >> x >> y >> z;
    }
};
Point Vector(Point a, Point b) {
    Point ab;
    ab.x = b.x - a.x;
    ab.y = b.y - a.y;   
    ab.z = b.z - a.z;
    return ab;
}
void testCase() {
    Point a, b,c,d;
    a.input();
    b.input();
    c.input();
    d.input();

    Point ab = Vector(a,b);
    Point ac = Vector(a,c);
    Point ad = Vector(a, d);

    Point abac;
    abac.x = ab.y * ac.z - ab.z * ac.y;
    abac.y = ab.z * ac.x - ab.x * ac.z;
    abac.z = ab.x * ac.y - ab.y * ac.x;

    int res = abac.x * ad.x + abac.y * ad.y + abac.z * ad.z;
    if (res == 0) {
        cout << "YES";
        
    } else {
        cout << "NO";
    }

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

