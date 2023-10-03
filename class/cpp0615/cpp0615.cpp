#include <iostream>
#include <algorithm>
using namespace std;
int dem = 1;
class NhanVien{
    private:
        string id = "000";
        string name;
        string dob;
        string gender;
        string address;
        string tax;
        string day;
        int age;
        int month;
        int ngay;
    public:
        void setId(string s) {
            id = s;
        }
        void setName(string s) {
            
            name = s;
        }
        void setDob(string s) {
            dob = s;
        }
        void setGender(string s) {
            gender = s;
        }
        void setAddress(string s) {
            address = s;
        }
        void setTax(string s) {
            tax = s;
        }
        void setDay(string s) {
            day = s;
        }
        void setAge() {
            age = 2023 - stoi(dob.substr(6,4));
        }
        void setMonth() {
            month = stoi(dob.substr(0,2));
        }
        void setNgay() {
            ngay = stoi(dob.substr(3,2));
        }
        int getAge() {
            return age;
        }
        int getMonth() {
            return month;
        }
        int getNgay() {
            return ngay;
        }

    friend istream & operator >> (istream &in, NhanVien &);
    friend ostream & operator << (ostream &out, NhanVien );
};
istream & operator >> (istream &in, NhanVien &n) {
    string id = to_string(dem);
    if (id.size() == 1) {
        id.insert(0, "0");
    }
    id = "000" + id;
    dem++;
    n.setId(id);
    cin.ignore();
    string ten,gioitinh, ngaysinh, diachi, mst, ngay;
    getline(in, ten);

    cin >> gioitinh;
    cin >> ngaysinh;
    cin.ignore();
    getline(in, diachi);
    cin >> mst;
    cin.ignore();
    cin >> ngay;
    n.setAddress(diachi);
    n.setDay(ngay);
    n.setDob(ngaysinh);
    n.setGender(gioitinh);
    n.setName(ten);
    n.setTax(mst);
    n.setAge();
    n.setMonth();
    n.setNgay();
    return in;
}
ostream & operator << (ostream &out, NhanVien n) {
    out << n.id << " " << n.name << " " << n.gender << " " << n.dob << " " << n.address << " " << n.tax << " " << n.day << endl;
    return out;
}
bool cmp(NhanVien a, NhanVien b) {
    if (a.getAge() == b.getAge()) {
        if (a.getMonth() == b.getMonth()) {
            return a.getNgay() < b.getNgay();
        }
        return a.getMonth() < b.getMonth();
    }
    return a.getAge() > b.getAge();
}
void sapxep(NhanVien ds[], int N) {
    sort(ds, ds+N, cmp);
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}