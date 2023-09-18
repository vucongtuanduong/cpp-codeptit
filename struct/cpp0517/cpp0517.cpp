#include <iostream>
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
};
//prototype
void nhap(NhanVien &n);
void inds(NhanVien ds[], int n);
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
}
void inds(NhanVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        string new_id = to_string(i + 1);
        if (new_id.size() == 1) {
            new_id = "0" + new_id;
        }
        ds[i].id = "000" + new_id;
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].tax << " " << ds[i].day << endl;
    }
}
int main () {
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}