#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>
#include <map>

using namespace std;

int dem = 1;
// map<int,int> m;

class SinhVien;
char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}
char tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}
string standardise(string s) {
    stringstream ss(s);
    string temp;
    string res = "";
    while (ss >> temp) {
        for (int i = 0; i < temp.size(); i++) {
            temp[i] = tolower(temp[i]);
        }
        temp[0] = toupper(temp[0]);
        res += temp + " ";
    }
    res.pop_back();
    return res;
}

class SinhVien{
    public:
        string id;
        string name;
        string className;
        string dob;
        double gpa;
        SinhVien() {
            id = "B20DCCN0";
            name = "";
            className = "";
            gpa = 0.0;
        }
        friend istream &operator >> (istream &in, SinhVien &sv) {
            
            // if (dem == 1) {
            //     in.ignore();
            // }
            scanf("\n");
            string temp = to_string(dem);
            while (temp.size() != 2) {
                temp = "0" + temp;
            }
            sv.id +=  temp;

            dem++;
            getline(in, sv.name);
            sv.name = standardise(sv.name);
            getline(in, sv.className);
            getline(in, sv.dob);
            in >> sv.gpa;
            if (sv.dob[2] != '/') {
                sv.dob.insert(0, "0");
            }
            if (sv.dob[5] != '/') {
                sv.dob.insert(3, "0");
            }

            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien sv) {
            out << sv.id << " " << sv.name << " " << sv.className << " " << sv.dob << " " << fixed << setprecision(2) <<  sv.gpa << endl;
            return out;
        }
};
bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}
void sapxep(SinhVien *ds, int N) {
    sort(ds, ds + N, cmp);
}
int main(){
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
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}