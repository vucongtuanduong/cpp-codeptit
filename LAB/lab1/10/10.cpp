#include <iostream>
#include <map>
#include <sstream>
using namespace std;
void testCase();
int countWords(string s);
int main (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    map<string,int> m;
    cin.ignore();
    string topic;
    while (n --) {
        string s;
        getline(cin, s);
        // cout << s << endl; 
        int count = countWords(s);
        if (count == 1) {
            m[s] = 0;
            topic = s;
        } else if(count == 0) {
            continue;
        } else {
            
            m[topic] ++;
        }

    }
    for (auto i : m) {
        cout << i.first << ": " << i.second << endl;
    }
}
int countWords(string s) {
    int count = 0;
    string temp;
    stringstream ss(s);
    while (ss >> temp) {
        count++;
    }
    return count;
}