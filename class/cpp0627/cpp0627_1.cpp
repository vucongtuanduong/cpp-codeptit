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
string standard(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}
class Lecturer{
    private:
        string id;
        string name;
        string department;
        string firstName;
        bool isContain;
    public:
        Lecturer() {
            id = "";
            name = "";
            department = "";
            isContain = false;
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
        void setIsContain(string s) {
            string temp = standard(s);
            string temp2;
            stringstream ss(name) ;
            int ok = 0;
            while (ss >> temp2) {
                temp2 = standard(temp2);
                if (temp2.find(temp) != -1) {
                    isContain = true;
                    ok = 1;
                    return;
                }
            }
            if (ok == 0) {
                isContain = false;
                return;
            }
        }
        bool getIsContain() {
            return isContain;
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
    // cin.ignore();
    while (q--) {
        string s;
        cin >> s;
        
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        s = standard(s);
        for (int i = 0; i < n; i++) {
			if (a[i].getName().find(s) != -1) {
                cout << a[i];
            }
        }

    }
}