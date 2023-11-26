//https://www.hackerrank.com/contests/thi-thu-c-cuoi-ki-ptit-test-1/challenges/c-final-test-1-problem-b-truy-van-tren-mang
#include <iostream>
#include <vector>
#include <map>
using namespace std;
void testCase();
vector<int> insertElement(vector<int> &a, int x);
//explicit
vector<int> insertElement(vector<int> &a, int x) {
    vector<int> res;
    res.push_back(x);
    for (int i = 0; i < a.size(); i++) {
        res.push_back(a[i]);
    }
    return res;
}
void testCase() {
    int n;
    cin >> n;
    int q;
    vector<int> a;
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        m[x]++;
    }
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    cin >> q;
    while (q--) {
        int choice;
        cin >> choice;
        
        int x;
        switch(choice) {
            case 1:
                
                cin >> x;
                a.insert(a.begin(), x);
                m[x]++;
                break;
            case 2:

                cin >> x;
                if (m[x] == 0) {
                    break;
                } else {
                    for (int i = 0; i < a.size(); i++) {
                        if (a[i] == x) {
                            a.erase(a.begin() + i);
                            m[x]--;
                            break;
                        }
                    }
                    
                }
                break;
            case 3:

                cin >> x;
                if (m[x] >= 1) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
                break;
        }
        // cout << choice << endl;
        // for (auto ele : a) {
        // 	cout << ele << " ";
		// } 
		// cout << endl;
    }
}
int main () {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin >> t;
    // while (t--) {
    //     testCase();
    //     cout << endl;
    // }
    testCase();
}