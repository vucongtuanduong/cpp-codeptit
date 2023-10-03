#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    private:
        string id;
        string name;
        string lop;
        string email;
        string school_year;
    public:
        void setId(string id) {
            this->id = id;
        }
        void setName(string name) {
            this->name = name;
        }
        void setLop(string lop) {
            this->lop = lop;
        }
        void setEmail(string email) {
            this->email = email;
        }
        void setSchoolYear() {
            school_year = "20" + lop.substr(1,2);
        }
        string getLop() {
            return this->lop;
        }
        string getId() {
            return this->id;
        }
        string getSchoolYear() {
            return school_year;
        }
        friend istream & operator >> (istream &in, Student &sv);
        friend ostream & operator << (ostream &out, Student sv);
};
istream & operator >> (istream &in, Student &sv) {
    string id, name, lop, email;
    cin >> id;
    cin.ignore();
    getline(in, name);
    cin >> lop >> email;
    sv.setId(id);
    sv.setName(name);
    sv.setLop(lop);
    sv.setEmail(email);
    sv.setSchoolYear();
    return in;
}
ostream & operator << (ostream &out, Student sv) {
    out << sv.id << " " << sv.name << " " << sv.lop << " " << sv.email << endl;
    return out;
}
void testCase();
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}
void testCase() {
    int n;
    cin >> n;
    Student *sv = new Student[n];
    for (int i = 0; i < n; i++) {
        cin >> sv[i];
    }
    int q;
    cin >> q;
    
    while (q--) {
        string school_year;
        cin >> school_year;
        cout << "DANH SACH SINH VIEN KHOA " << school_year << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (sv[i].getSchoolYear() == school_year) {
                cout << sv[i];
            }
        }
    }
}