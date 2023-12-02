
#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    long long res = 0;
    
    while (getline(cin, s)) {
        int count = 0;
        string temp1, temp2;
        string num;
        map<int, string> mp;
        int index = 0;
        vector<string> v;
        vector<int> foundIndex;
        set<int> se;
        v.push_back("one");
        v.push_back("two");
        v.push_back("three");
        v.push_back("four");
        v.push_back("five");
        v.push_back("six");
        v.push_back("seven");
        v.push_back("eight");
        v.push_back("nine");
        for (int i = 0; i < 9; i++) {
            int index = s.rfind(v[i]);
            int index2 = s.find(v[i]);
            if (index != -1) {
                // cout << "v[i]: " << v[i] << " " << ",found index: " << index << ",found index 2: " <<index2 << endl;
                if (index2 == index) {
                    foundIndex.push_back(index);
                    mp[index] = to_string(i + 1);
                } else {
                    foundIndex.push_back(index);
                    foundIndex.push_back(index2);
                    mp[index] = to_string(i + 1);
                    mp[index2] = to_string(i + 1);
                }
                
                
            }
        }
        sort(foundIndex.begin(), foundIndex.end());
        // cout << endl;
        // for (auto x : foundIndex) {
        //     cout << x << " ";
        // }
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                count++;
                if (count == 1) {
                    temp1 = s[i];
                    mp[i] = temp1;
                }
                temp2 = s[i];
                index = i;
            }
            
            
        }
        mp[index] = temp2;
        int max = -1;
        int min = 0;
        int dem = 0;
        for (auto x : mp) {
            se.insert(x.first);
        }
        vector<int> chiso;
        for (auto x : se) {
            chiso.push_back(x);
        }
        // cout << "s: " << s << ", chiso: ";
        // for (auto x : chiso) {
        //     cout << x << " ";
        // }
        // cout << endl;
        min = chiso[0];
        max = chiso[chiso.size() - 1];
        
        // int left = min(mp[temp1], foundIndex[0]);
        // int right = min(mp[temp2], foundIndex[foundIndex.size() - 1]);
        // cout << left << " " <<right << endl;
        num  = mp[min] + mp[max];
        // cout << num << endl;
        long long number = stoll(num);
        res += number;
        // if (max == s.size() - 1) {
        //     cin.ignore();
        // }
        // cout << "s: " << s << ", number : ";
        // cout << number << endl;
    }
    cout << res;

    return 0;
}
