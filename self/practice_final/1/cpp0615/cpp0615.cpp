//AC
#include <iostream>
#include <algorithm>
using namespace std;
int dem = 1;
class NhanVien{
    public:
        string id = "000";
        string name;
        string gender;
        string dob;
        string address;
        string tax;
        string contract_day;
        int year;
        int month;
        int day;
        friend istream &operator >> (istream &in, NhanVien &x) {
            if (dem == 1) {
                in.ignore();
            }
            string temp = to_string(dem);
            while (temp.size() != 2) {
                temp = "0" + temp;
            }
            x.id += temp;
            dem++;
            getline(in, x.name);
            getline(in, x.gender);
            getline(in, x.dob);
            getline(in, x.address);
            getline(in, x.tax);
            getline(in, x.contract_day);

            x.month = stoi(x.dob.substr(0,2));
            x.day = stoi(x.dob.substr(3,2));
            x.year = stoi(x.dob.substr(6,4));

            return in;
        }
        friend ostream &operator << (ostream &out, NhanVien x) {
            out << x.id << " " << x.name << " "  << x.gender << " " << x.dob << " " << x.address << " " << x.tax << " " << x.contract_day << endl;
            return out;
        }
};  
bool cmp(NhanVien a, NhanVien b) {
    if (a.year == b.year) {
        if (a.month == b.month) {
            return a.day < b.day;
        }
        return a.month < b.month;
    }
    return a.year < b.year;
}
void sapxep(NhanVien *ds, int N) {
    sort(ds, ds + N, cmp);
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