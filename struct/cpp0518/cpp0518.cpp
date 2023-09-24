#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int current = 1;
struct NhanVien{
    string id;
    string name;
    string gender;
    string dob;
    string address;
    string tax;
    string day;
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
    scanf("\n");
    getline(cin, n.name);
    cin >> n.gender;
    cin >> n.dob;
    cin.ignore();
    getline(cin, n.address);
    cin >> n.tax;
    cin.ignore();
    cin >> n.day;
    cin.ignore();
    string new_id = to_string(current);
    if (new_id.size() == 1) {
        new_id = "0" + new_id;
    }
    n.id = "000" + new_id;
    current++;
    string year = n.dob.substr(6, 4);
    int year_int = stoi(year);
    n.age = 2023 - year_int;
    n.ngay = stoi(n.dob.substr(3,2));
    n.month = stoi(n.dob.substr(0, 2));
}
void inds(NhanVien ds[], int n) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].id << " " << v[i].name << " " << v[i].gender << " " << v[i].dob << " " << v[i].address << " " << v[i].tax << " " << v[i].day << endl;

    }
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
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}