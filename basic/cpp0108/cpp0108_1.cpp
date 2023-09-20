#include <iostream>
#include <cmath>
using namespace std;
// const int MAX = 1e9 + 1;
void testCase();
// int prime[MAX] = {0};
void init();
int checkIncrease(int n);
int checkDecrease(int n);
int isPrime(int n) ;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    // init();
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n ;
    cin >> n;
    int left = pow(10, n - 1);
    int right = pow(10, n) ;
    int count = 0;
    for (int i = left; i < right; i++) {
        
        if ( (checkIncrease(i) || checkDecrease(i))) {
            if (isPrime(i)) {
                count++;
            }
            
            // cout << i << " ";
            // cout << (!prime[i] && (checkIncrease(i) || checkDecrease(i))) << endl;
        }
        
        
    }
    cout << count;
    // cout << check(n);
}
//void init() {
//    prime[0] = prime[1] = 1;
//    for (int i = 2; i <= sqrt(MAX); i++) {
//        if (!prime[i]) {
//            for (int j = i * i; j < MAX; j += i) {
//                prime[j] = 1;
//            }
//        }
//    }
//}
int checkIncrease(int n) {
    int x = n % 10;
    n /= 10;
    while (n > 0) {
    
        int temp = n % 10;
        if (temp <= x) {
            return 0;
        }
        x = temp;
        n /= 10;
    }
    return 1;
}
int checkDecrease(int n) {
    int x = n % 10;
    n /= 10;
    while (n > 0) {
    
        int temp = n % 10;
        if (temp >= x) {
            return 0;
        }
        x = temp;
        n /= 10;
    }
    return 1;
}
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}