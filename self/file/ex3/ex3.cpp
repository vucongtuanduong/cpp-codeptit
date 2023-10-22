#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
struct SinhVien;
struct MonHoc;
struct MonHoc{
    string course_id;
    string course_name;
    int noc;//number of credits
    double attendace_score;
    double mid_term_score;
    double final_term_score;
    double average_score;

};
struct SinhVien{
    string student_id;
    string student_name;
    string className;
    vector<MonHoc> mh;
};
void readSV(SinhVien &sv, fstream fp) {
    fp >> sv.student_id;
    fp.ignore();
    getline(fp, sv.student_name);
    fp >> sv.className;
    
}
void readMH(MonHoc &mh, fstream fp) {
    fp >> mh.course_id;
    fp.ignore();
    fp >> mh.course_name;
    fp >> mh.noc;
    fp >> mh.attendace_score;
    fp >> mh.mid_term_score;
    fp >> mh.final_term_score;
    mh.average_score = 0.1 * attendace_score + 0.2 * mid_term_score + 0.7 * final_term_score;
    
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
    fstream fp1, fp2;
    fp1.open("PTIT.in");
    int n, m, k;
    fp1 >> n >> m;
    fp1.ignore();
    SinhVien *sv = new SinhVien[n];
    MonHoc *mh = new MonHoc[m];
    for (int i = 0; i < n; i++) {
        readMh(mh[i], fp1);
    }
    for (int i = 0; i < m; i++) {
        readSV(sv[i], fp1);
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