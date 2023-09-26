#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void testCase();
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
void testCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k, x;
    cin >> k >> x;
    int i = lower_bound(a.begin(), a.end(), x) - a.begin(); // >= x
    int j = i;
    for (int z = k / 2 ; z >= 1; z--) {
        cout << a[i - z] << " ";
    }

    // Note: Phần tử khác x về index chứ không phải khác x về giá trị
    // Đoạn này mình làm while (a[j] == x) j++; và sai nên rút ra được vậy.
    if (a[j] == x) {
        j++;
    }
    for (int z = 0; z < k / 2; z++) {
        cout << a[j + z] << " ";
    }

}