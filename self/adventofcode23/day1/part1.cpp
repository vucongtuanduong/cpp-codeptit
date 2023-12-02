
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
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                count++;
                if (count == 1) {
                    temp1 = s[i];// lay ki tu la so dau tien
                }
                temp2 = s[i];//cu lap den cuoi cung thi temp2 la ki tu la so cuoi cung
            }
            
            
        }
        
        num = temp1 + temp2;
        long long number = stoll(num);
        res += number;
    }
    cout << res;

    return 0;
}
