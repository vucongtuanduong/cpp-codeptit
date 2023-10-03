#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Student{
    private:
        string id;
        string name;
        string lop;
        string email;
    public:
        void setId(string s) {
            id = s;
        }
        void setName(string s) {
            name = s;
        }
        void setLop(string s) {
            lop = s;
        }
        void setEmail(string s) {
            email = s;
        }
        string getLop() {
            return lop;
        }
        string getId() {
        	return id;
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
    return a.getId() < b.getId();
}
void sapxep(vector<Student> &sv) {
    sort(sv.begin(), sv.end(), cmp);
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
    // int n;
    // cin >> n;
    vector<Student> sv;
    Student temp;
    while(cin >> temp) {
        sv.push_back(temp);
    }

    // sort(sv.begin(), sv.end(), cmp);
    sapxep(sv);
    int n = sv.size();
    for (int i = 0; i < n; i++) {
        cout << sv[i];
    }
}