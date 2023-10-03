#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    private:
        string id;
        string name;
        string lop;
        string email;
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
        string getLop() {
            return this->lop;
        }
        string getId() {
            return this->id;
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
    
    return in;
}
ostream & operator << (ostream &out, Student sv) {
    out << sv.id << " " << sv.name << " " << sv.lop << " " << sv.email << endl;
    return out;
}
bool cmp(Student a, Student b) {
    if (a.getLop() == b.getLop()) {
        return a.getId() < b.getId();
    }
    return a.getLop() < b.getLop();
}
void sapxep(Student *sv, int n) {
    sort(sv, sv + n, cmp);
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
    sapxep(sv, n);
    for (int i = 0; i < n; i++) {
        cout << sv[i];
    }
}