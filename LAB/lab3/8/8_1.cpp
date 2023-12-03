#include <bits/stdc++.h>
using namespace std; 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<pair<int, pair<int, int>>, int> ma;
        while(n--){
            int day;
            string subject;
            string week;
            cin >> day >> subject >> week;
            for(int i=0; i<week.size(); i++){
                if(isdigit(week[i])){
                    for(int j=0; j<subject.size(); j++){
                        if(isdigit(subject[j])){
                            pair<int, int> x;
                            x.first=j+1;
                            x.second=day;
                            pair<int, pair<int, int>> y;
                            y.first=i+1;
                            y.second=x;
                            ma[y]++;
                        }
                    }
                }
            }
        }
        bool check=false;
        for(auto it=ma.begin(); it!=ma.end(); ++it){
            if((*it).second>1){
                check=true;
            }
        }
        if(!check){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
