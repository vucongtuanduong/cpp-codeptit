#include <iostream>
#include <sstream>
using namespace std;
int dem = 1;
class GiangVien;
class GiangVien{
    private:
        string id;
        string name;
        string department;
        string standardDepart;
    public:
        GiangVien();
        friend istream &operator >> (istream &in, GiangVien &gv);
        string getDepartment();
        friend ostream &operator << (ostream &out, GiangVien gv);
        void setStandardDepart(string standardDepart);

};
void testCase();
void query(GiangVien * gvList, int n) ;
string shortDepart(string input);
char toupper(char a);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
    return 0;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    GiangVien *gvList = new GiangVien[n];
    for (int i = 0; i < n; i++) {

        cin >> gvList[i];
        dem++;
        // gvList[i].print();
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        query(gvList, n);
    }
}
istream &operator >> (istream &in, GiangVien &gv) {
    string name, department;
    getline(in, name);
    getline(in, department);
    string temp = to_string(dem);
    if (temp.size() == 1) {
        temp = "0" + temp;
    }
    gv.id += temp;
    gv.name = name;
    gv.department = department;
    return in;

}
void query(GiangVien * gvList, int n) {
    string inputDepart;
    getline(cin, inputDepart);
    string standardDepart = shortDepart(inputDepart);

    cout << "DANH SACH GIANG VIEN BO MON " << standardDepart << ":\n";
    for (int i = 0; i < n; i++) {
//        cout << gvList[i].getDepartment() << endl;
//		cout << gvList[i].getDepartment() << " " << inputDepart;
		gvList[i].setStandardDepart(standardDepart);
        if ((gvList[i].getDepartment()) == inputDepart) {
            cout << gvList[i];
        }
    }
}
string shortDepart(string input) {
    stringstream ss(input);
//    cout << input << endl;
    string temp, res = "";
    while (ss >> temp) {
        res += toupper(temp[0]);
//        cout << res << endl;
    }
    return res;

}
char toupper(char a) {
    if (a >= 'a' && a <= 'z') {
        a -= 32;
    }
    return a;
}
string GiangVien::getDepartment() {
    return department;
}
ostream &operator << (ostream &out, GiangVien gv) {
    out << gv.id << " " << gv.name << " " << gv.standardDepart << endl;
    return out;
}
GiangVien::GiangVien() {
    id = "GV" ;
    name = "";
    department = "";
}   
void GiangVien:: setStandardDepart(string standardDepart) {
	this->standardDepart = standardDepart;
}