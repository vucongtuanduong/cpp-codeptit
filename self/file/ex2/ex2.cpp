#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
struct SinhVien{
    string id;
    string name;
    string className;
    float score_c;
    float score_cpp;
    float average_score;
};
void read(SinhVien &sv) {
    cin >> sv.id;
    cin.ignore();
    getline(cin, sv.name);
//    cin.ignore();
    cin >> sv.className;
    cin >> sv.score_c;
    cin >> sv.score_cpp;
    sv.average_score =1.0 *  (sv.score_c + sv.score_cpp) / 2;
}
void printList(SinhVien *sv, int n) {
    for (int i = 0; i < n; i++) {
        if (sv[i].score_cpp >= 7.0) {
            cout << sv[i].id << " " << sv[i].name << " " << sv[i].className << " " << sv[i].score_c << " " << sv[i].score_cpp << endl;
        }
    }
}
bool cmpString(SinhVien a, SinhVien b) {
    return a.name < b.name;
}
bool cmpScore(SinhVien a, SinhVien b) {
    return a.average_score > b.average_score;
}
void print(SinhVien *sv, int n) {
    for (int i = 0; i < n; i++) {
        cout << sv[i].id << " " << sv[i].name << " " << sv[i].className << " " << sv[i].score_c << " " << sv[i].score_cpp << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("PTIT.in", "r", stdin);   
    freopen("PTIT.out", "w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    SinhVien *sv = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        read(sv[i]);
    }
    cout << "Danh sach sinh vien co diem c++ >= 7.0: \n";
    printList(sv, n);
    cout << endl;
    sort(sv, sv + n, cmpString);
    cout << "Danh sach sinh vien sap xep theo thu tu tu dien: \n";
    print(sv, n);
    cout << "\nDanh sach sinh vien sap xep theo diem trung binh\n";
    sort(sv, sv + n, cmpScore);
    print(sv, n);
}