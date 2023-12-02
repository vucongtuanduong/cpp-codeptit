#include <bits/stdc++.h>
using namespace std;
int dem = 1;
class Lecturer;
void testCase();
char standardise(char s);
bool cmp(Lecturer a, Lecturer b);
class Lecturer{
    public:
        string name ;
        string lastName;
        string id = "GV";
        string course;

        friend istream &operator >> (istream &in, Lecturer &a) {
            string temp = to_string(dem);
            while (temp.size() != 2) {
                temp = "0" + temp;
            }
            a.id += temp;
            dem++;

            string inputName;
            getline(in, inputName);
            a.name = inputName;
            string inputCourse;
            getline(in, inputCourse);
            string changeCourse = "";
            stringstream ss1(inputCourse);
            string temp1;
            while (ss1 >> temp1) {
                changeCourse += standardise(temp1[0]);
            }
            a.course = changeCourse;
            stringstream ss(inputName);
            string ten;
            while (ss >> ten) {
                ten = ten;
            }
            a.lastName = ten;
            return in;
        }
        friend ostream &operator << (ostream &out, Lecturer a) {
            out << a.id << " " << a.name << " " << a.course << endl;
            return out;
        }

};
//explicit
bool cmp(Lecturer a, Lecturer b) {
    if (a.lastName == b.lastName) {
        return a.id < b.id;
    }
    return a.lastName < b.lastName;
}
char standardise(char s) {
    
        if (s >= 'a' && s <= 'z') {
            s -= 32;
        }
    
    return s;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    Lecturer *dsgv = new Lecturer[n];
    for (int i = 0; i < n; i++) {
        cin >> dsgv[i];
    }
    sort(dsgv, dsgv + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << dsgv[i];
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}