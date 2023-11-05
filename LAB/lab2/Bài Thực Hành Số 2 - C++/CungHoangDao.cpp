#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define MAX 1000000000 + 5
#define M 100 + 5
#define N 500 + 5
#define MOD (long long)1000000007
#define ll long long
#define ld long double
#define sz size()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)

struct Zodiac {
    int startMonth;
    int startDay;
    int endMonth;
    int endDay;
    std::string name;
};

int main() {
    std::vector<Zodiac> zodiacs = {
        {3, 21, 4, 19, "Bach Duong"},
        {4, 20, 5, 20, "Kim Nguu"},
        {5, 21, 6, 20, "Song Tu"},
        {6, 21, 7, 22, "Cu Giai"},
        {7, 23, 8, 22, "Su Tu"},
        {8, 23, 9, 22, "Xu Nu"},
        {9, 23, 10, 22, "Thien Binh"},
        {10, 23, 11, 22, "Thien Yet"},
        {11, 23, 12, 21, "Nhan Ma"},
        {12, 22, 1, 19, "Ma Ket"},
        {1, 20, 2, 18, "Bao Binh"},
        {2, 19, 3, 20, "Song Ngu"}
    };

    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        int d, m;
        std::cin >> d >> m;

        for (const auto& zodiac : zodiacs) {
            if ((m == zodiac.startMonth && d >= zodiac.startDay) || (m == zodiac.endMonth && d <= zodiac.endDay)) {
                std::cout << zodiac.name << '\n';
                break;
            }
        }
    }

    return 0;
}