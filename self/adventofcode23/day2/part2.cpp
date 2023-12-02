
#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    int count = 1;
    long long res = 0;
    map<string,int> bag;
    bag.insert(make_pair("red", 12));
    bag.insert(make_pair("green", 13));
    bag.insert(make_pair("blue", 14));
    while (getline(cin, s)) {
        string s1 = s;
        stringstream ss1(s1);
        string temp;
        getline(ss1, s1, ':');
        long long product = 1;
        map<string,int> turn;
        while (getline(ss1, s1, ';')) {
            
            // turn["red"] = 0;
            // turn["green"] = 0;
            // turn["blue"] = 0;
            string s2 = s1;
            stringstream ss2(s2);
            
            while(getline(ss2, s2, ',')) {
                vector<string> candyPair;
                string s3 = s2;
                stringstream ss3(s3);
                while (ss3 >> s3) {
                    candyPair.push_back(s3);
                }
                // cout << candyPair[1] << " " << candyPair[0] << endl;
                // cout << "-----------------------\n";
                int currentCandy = stoi(candyPair[0]);
                if (turn[candyPair[1]] < currentCandy) {
                    turn[candyPair[1]] = currentCandy;
                }
                // turn[candyPair[1]] += stoi(candyPair[0]);
                
            }
            
            
            // for (auto x : turn) {
            //     cout << x.first << " " << x.second << endl;
            // }
            // cout << "end turn! \n";
            // if (ok == 0) {
            //     break;
            // }
            
        }
        for (auto x : turn) {
            cout << x.first << " " << x.second << endl;
            // if (bag[x.first] < x.second) {
            //     ok = 0;
            //     break;
            // }
            product *= x.second;
            
        }
        // if(ok == 1) {
        //     res += count;
        // }
        res += product;
        cout << "game: " << count << ", res = " << res << endl;
        count++;
    }
    // cout << res;
    return 0;
}