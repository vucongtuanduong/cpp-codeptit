#include <iostream>
using namespace std;
class Student{
    private:
        string id;
        string name;
        int year;
        double gpa;
    public:
        Student() {
            this->id = "";
            this->name = "";
            this->year = 0;
            this->gpa = 0;
        }
        ~Student() {
            cout << "Destructor of " << this->name << " is called" << endl;
        }
        Student(string id, string name, int year, double gpa) {
            this->id = id;
            this->name = name;
            this->year = year;
            this->gpa = gpa;
        }
        void setId(string id) {
            this->id = id;
        }
        string getId() {
            return this->id;
        }
        void read() {
            cin >> id;
            cin.ignore();
            getline(cin, name);
            cin >> year >> gpa;
        }
        void print() {
            cout << id << " " << name << " " << year << " " << gpa << endl;
        }
};
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    Student st;
    cout << "Before we read: " << endl;
    st.print();
    st.read();
    st.print();
    Student st2("B20DCCN001", "Nguyen Van A", 2000, 3.5);
    st2.print();
    Student *st3 = new Student("B20DCCN002", "Nguyen Van B", 2000, 3.5);
    st3->print();
    return 0;
}