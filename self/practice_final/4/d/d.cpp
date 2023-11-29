#include <bits/stdc++.h>
using namespace std;
class Club{
	public:
		
	    string name;
	    int points = 0;
	    int goals = 0;
	    int concedes = 0;
	    int diff = 0;
};
void testCase();
bool cmp(Club a, Club b);
//explicit
bool cmp(Club a, Club b) {
    if (a.points == b.points) {
        return a.diff > b.diff;
    }
    return a.points > b.points;
}
void testCase() {
    string s;
    vector<string>matches;
    map<string,Club> clubMap;
    vector<Club> clubs;
    while (getline(cin, s)) {
        matches.push_back(s);

    }
    
    for (int i = 0; i < matches.size(); i++) {
        vector<string> aVector,bVector,score;
        stringstream ss(matches[i]);
        Club a, b;
        string temp;
        while (getline(ss, temp, ']')) {
            // cout << temp << endl;
            aVector.push_back(temp);
            break;
        }
        while (getline(ss, temp, '[')) {
            // cout << temp << endl;
            score.push_back(temp);
            break;
        }
        while (getline(ss, temp, '[')) {
            // cout << temp << endl;
            bVector.push_back(temp);
            break;
        }
        // cout << a[0] << endl;
        // cout << score[0] << endl;
        // cout << b[0] << endl;
        // cout << x[0] << endl;
        string team1 = aVector[0];
        string team2 = bVector[0];
        
        team1.erase(0,1);
        team2.erase(team2.size() - 1, 1);
        vector<string> tempScore;
        stringstream ss1(score[0]);
        while (ss1 >> temp) {
            tempScore.push_back(temp);
        }
        a.name = team1;
        b.name = team2;
        int goalA = stoi(tempScore[0]);
        int goalB = stoi(tempScore[2]);
        clubMap[team1].name = team1;
        clubMap[team2].name = team2;
        if (goalA > goalB) {
            
            clubMap[team1].goals += goalA;
            clubMap[team1].concedes += goalB;
            clubMap[team1].points += 3;
            clubMap[team2].concedes += goalA;
            clubMap[team2].goals += goalB;
            a = clubMap[team1];
            b = clubMap[team2];
        } else if (goalB > goalA) {
            clubMap[team1].goals += goalA;
            clubMap[team1].concedes += goalB;
            clubMap[team2].points += 3;
            clubMap[team2].concedes += goalA;
            clubMap[team2].goals += goalB;
            a = clubMap[team1];
            b = clubMap[team2];
        } else {
            clubMap[team1].goals += goalA;
            clubMap[team1].concedes += goalB;
            clubMap[team1].points += 1;
            clubMap[team2].points += 1;
            clubMap[team2].concedes += goalA;
            clubMap[team2].goals += goalB;
            a = clubMap[team1];
            b = clubMap[team2];
        }
        clubMap.insert(make_pair(team1, a));
        clubMap.insert(make_pair(team2, b));
        // cout << clubMap[team1].name << endl;
    }
    
    for (auto x : clubMap) {
        x.second.diff = x.second.goals - x.second.concedes;
        // cout << x.second.name << endl;
        clubs.push_back(x.second);
    }
    sort(clubs.begin(), clubs.end(), cmp);
    for (int i =0 ; i < clubs.size(); i++) {
        cout << clubs[i].name << " " << clubs[i].points << " " << clubs[i].diff << endl;
    }
}
int main () {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}