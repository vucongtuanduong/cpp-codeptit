#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;
int count = 1;
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
string standard(string s) {
    vector<string> a;
    stringstream ss(s);
    string temp;
    s = "";
    while (ss >> temp) {
        toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++) {
            tolower(temp[i]);
        }
        s += temp + " ";
    }
    s.erase(s.size() - 1, 1);
    return s;
}
class SinhVien{
    private:
        string id;
        string name;
        string lop;
        float gpa;
        string dob;
    public:
        SinhVien() {
            id = "";
            name = "";
            lop = "";
            gpa = 0;
        }
        void setName(string name) {
            name = standard(name);
            this->name = name;
        }
        void setLop(string lop) {
            this->lop = lop;
        }
        void setGpa(float gpa) {
            this->gpa = gpa;
        }
        void setDob(string dob) {
            if (dob[2] != '/') {
                dob.insert(0, "0");
            }
            if (dob[5] != '/') {
                dob.insert(3, "0");
            }
            this->dob = dob;
        }
        void setId(string id) {
            this->id = id;
        }
        friend istream & operator >> (istream &in, SinhVien &sv);
        friend ostream & operator << (ostream &out, SinhVien sv);

};
istream & operator >> (istream &in, SinhVien &sv) {
    string id = to_string(count);
    if (id.size() == 1) {
        id.insert(0, "0");
    }
    sv.setId("B20DCCN0" + id);
    count++;
    cin.ignore();
    string name,lop,dob;
    float gpa;
    getline(cin, name);
    cin >> lop >> dob >> gpa;
    sv.setName(name);
    sv.setLop(lop);
    sv.setDob(dob);
    sv.setGpa(gpa);
    return in;
}
ostream & operator << (ostream &out, SinhVien sv) {
    out << sv.id << " " << sv.name << " " << sv.lop << " " << sv.dob << " " << fixed << setprecision(2) << sv.gpa << endl;
    return out;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}