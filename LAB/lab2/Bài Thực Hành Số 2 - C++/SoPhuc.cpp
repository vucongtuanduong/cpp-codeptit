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

struct SoPhuc
{
    long long thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b)
{
    SoPhuc res;
    a.thuc += b.thuc;
    a.ao += b.ao;
    res.thuc = a.thuc * a.thuc - a.ao * a.ao;
    res.ao = 2 * a.thuc * a.ao;
    return res;
}

void hien_thi(SoPhuc a)
{
    cout << a.thuc << " + " << a.ao << 'i';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
}