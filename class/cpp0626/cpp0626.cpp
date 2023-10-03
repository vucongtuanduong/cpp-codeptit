#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int dem = 1;
char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}
class Lecturer{
    private:
        string id;
        string name;
        string department;
        string firstName;
    public:
        Lecturer() {
            id = "";
            name = "";
            department = "";
        }
        void setId() {
            string temp = to_string(dem);
            if (temp.size() == 1) {
                temp = "0" + temp;
            }
            id = "GV" + temp;
        }
        void setName(string name) {
            this->name = name;
        }
        void setDepartment(string department) {
            string s = department, temp;
            stringstream ss(s);
            while (ss >> temp) {
                this->department += toupper(temp[0]);

            }
        }
        void setFirstName() {
            string temp = name, s;
            stringstream ss(temp);
            while (ss >> s) {
                firstName = s;
            }

        }
        string getFirstName() {
            return firstName;
        }
        string getId() {
            return id;
        }
        string getDepartment() {
            return department;
        }
        string getName() {
            return name;
        }
    friend istream & operator >> (istream &in, Lecturer &gv);
    friend ostream & operator << (ostream &out, Lecturer gv);
};
istream & operator >> (istream &in, Lecturer &gv) {
    string name, department;
    getline(in, name);
    getline(in, department);
    gv.setId();
    gv.setName(name);
    gv.setDepartment(department); 
    gv.setFirstName();  
    return in;
}
ostream & operator << (ostream &out, Lecturer gv) {
    out << gv.getId() << " " << gv.getName() << " " << gv.getDepartment() << endl;
    return out;
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    Lecturer *a = new Lecturer[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dem++;
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        string department;
        getline(cin, department);
        string s = department, temp;
        department = "";
        stringstream ss(s);
        while (ss >> temp) {
            department += toupper(temp[0]);

        }
        cout << "DANH SACH GIANG VIEN BO MON " << department << ":\n";
        for (int i = 0; i < n; i++) {
            if (a[i].getDepartment() == department) {
                cout << a[i];
            }
        }

    }
}