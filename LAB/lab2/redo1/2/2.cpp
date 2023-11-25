//p-startup 1
#include <iostream>
#include <algorithm>
using namespace std;
class DoiThi{
    public:
        string id;
        int share;
        int interact;
        double score;
        friend istream &operator >> (istream &in, DoiThi &a) {
            in >> a.id >> a.share >> a.interact;
            a.score = 0.7 * a.share + 0.3 * a.interact;

            return in;
        }
};
void testCase();
bool cmp(DoiThi a, DoiThi b) {
    if (a.score == b.score) {
        return a.id < b.id;
    }
    return a.score > b.score;
}

void testCase() {
    int n;
    cin >> n;
    DoiThi *a = new DoiThi[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < 7; i++) {
        cout << a[i].id << " ";
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}