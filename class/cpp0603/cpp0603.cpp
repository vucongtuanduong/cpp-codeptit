#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
void tolower(char &c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
}
void toupper(char &c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
}
class SinhVien{
    private:
        string id;
        string lop;
        string dob;
        float gpa;
        string name;
    public:
        SinhVien() {
            id = "B20DCCN001";
            lop = "";
            dob = "";
            gpa = 0;
            name = "";
        }
        void setDob(string s) {
            if (s[2] != '/') {
                s.insert(0, "0");
            }
            if (s[5] != '/') {
                s.insert(3, "0");
            }
            dob = s;
        }
        void setGpa(float n) {
            gpa = n;
        }
        void setLop(string s) {
            lop = s;
        }
        void setName(string s) {
            string temp;
            // vector<string> res;
            stringstream ss(s);
            string res = "";
            while (ss >> temp) {
                toupper(temp[0]);
                for (int i = 1; i < temp.size(); i++) {
                    tolower(temp[i]);
                }
                res += temp;
                res += " ";
            } 
            res.erase(res.size() - 1, 1);
            name = res;
        }
    friend istream & operator >> (istream &in, SinhVien&);
    friend ostream & operator << (ostream &out, SinhVien);
};
istream & operator >> (istream &in, SinhVien&sv) {
    string ten,lop,ngaysinh;
    float diem;
    getline(in, ten);
    cin >> lop;
    cin >> ngaysinh;
    cin >> diem;
    sv.setName(ten);
    sv.setLop(lop);
    sv.setDob(ngaysinh);
    sv.setGpa(diem);
    return in;
}
ostream & operator << (ostream &out, SinhVien sv) {
    out << sv.id << " " << sv.name << " " << sv.lop << " " << sv.dob << " " << fixed << setprecision(2) <<  sv.gpa;
    return out;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}