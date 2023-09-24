#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int current = 1;
struct NhanVien{
    string name;
    string dob;
    int age;
    int month;
    int ngay;
};
vector<NhanVien> v;
//prototype
void nhap(NhanVien &n);
void inds(NhanVien ds[], int n);
bool sx(NhanVien a, NhanVien b);
void sapxep(NhanVien a[], int n);
//explicit
void nhap(NhanVien &n) {
    
    cin >> n.name >> n.dob;
    // getline(cin, n.dob);
    // cout << n.name << endl;
    // cout << n.dob << endl;
    string year = n.dob.substr(6, 4);
    int year_int = stoi(year);
    n.age = 2023 - year_int;
    n.month = stoi(n.dob.substr(3,2));
    n.ngay = stoi(n.dob.substr(0, 2));
}
void inds(NhanVien ds[], int n) {
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i].id << " " << v[i].name << " " << v[i].gender << " " << v[i].dob << " " << v[i].address << " " << v[i].tax << " " << v[i].day << endl;

    // }
    
    cout << v[v.size() - 1].name << endl;
    cout << v[0].name << endl;
}
bool sx(NhanVien a, NhanVien b) {
    if (a.age == b.age) {
        if (a.month == b.month) {
            return a.ngay < b.ngay;
        } 
        return a.month < b.month;
    }
    return a.age > b.age;
}
void sapxep(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end(), sx);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}