#include<bits/stdc++.h>
using namespace std;

// Function to create Fibonacci set
set<int> createFibonacciSet() {
    set<int> fibonacciSet;
    fibonacciSet.insert(0);
    fibonacciSet.insert(1);
    int a = 1, b = 1;
    while (a <= 1000) {
        int temp = a;
        a = b;
        b = temp + b;
        fibonacciSet.insert(a);
    }
    return fibonacciSet;
}

// Function to find the maximum Fibonacci subarray
vector<int> findMaxFibonacciSubarray(vector<int> A, set<int> fibonacciSet) {
    vector<int> result;
    for (int num : A) {
        if (fibonacciSet.find(num) != fibonacciSet.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    set<int> fibonacciSet = createFibonacciSet();
    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        vector<int> result = findMaxFibonacciSubarray(A, fibonacciSet);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
