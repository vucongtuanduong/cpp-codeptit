#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    private:
        string id;
        string name;
        string lop;
        string email;
        string major;
        bool isHonors;
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
        void setMajor() {
            string temp = id.substr(3,4);
            if (temp == "DCKT") {
                major = "Ke toan";

            } else if (temp == "DCCN" && isHonors == false) {
                major = "Cong nghe thong tin";
            } else if (temp == "DCAT" && isHonors == false) {
                major = "An toan thong tin";
            } else if (temp == "DCVT") {
                major = "Vien thong";
            } else if (temp == "DCDT") {
                major = "Dien tu";
            }
        }
        void setHonors() {
            if (lop[0] == 'E') {
                isHonors = true;
            } else {
                isHonors = false;
            }
        }
        string getLop() {
            return this->lop;
        }
        string getId() {
            return this->id;
        }
        string getMajor() {
            return major;
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
    sv.setHonors();
    sv.setMajor();
    return in;
}
ostream & operator << (ostream &out, Student sv) {
    out << sv.id << " " << sv.name << " " << sv.lop << " " << sv.email << endl;
    return out;
}
string toupper(string s) {
    
	for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    return s;
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
    cin.ignore();
    while (q--) {
        string major;
        getline(cin , major);
        cout << "DANH SACH SINH VIEN NGANH " << toupper(major) << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (sv[i].getMajor() == major) {
                cout << sv[i];
            }
        }
    }
}