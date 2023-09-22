#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
struct SinhVien {
    string id = "B20DCCN0", name, lop, dob;
    float gpa;
} ;
bool sx(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}
vector<SinhVien> v;
void sapxep(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end(), sx);
}
void tolower(char &c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
}
void toupper(char &c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
}
string standard(string name) {
    string temp;
    stringstream ss(name);
    name = "";
    while (ss >>  temp) {
        toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++) {
            tolower(temp[i]);
        }
        name = name + temp + " ";
    }
    // toupper(name[0]);
    // for (int i = 1; i < name.size(); i++) {
    //     tolower(name[i]);
    // }
    name.erase(name.size() - 1, 1);
    return name;
}
void nhap(SinhVien ds[], int n) {
    
	for (int i = 0; i < n; i++) {
        string id_temp = to_string(i + 1);
        if (id_temp.size() == 1) {
            id_temp = "0" + id_temp;
        }
        ds[i].id += id_temp;
        cin.ignore();
        getline(cin, ds[i].name);
        ds[i].name = standard(ds[i].name);
	    cin >> ds[i].lop;
	    cin.ignore();
	    cin >> ds[i].dob;
	    cin.ignore();
	    cin >> ds[i].gpa;
	    if (ds[i].dob[2] != '/') {
	        ds[i].dob.insert(0, "0");
	    } 
	    if (ds[i].dob[5] != '/') {
	        ds[i].dob.insert(3, "0");
	    }
    }
//    for (int i = 0; i < n; i++) {
//    	
//	}
    

}
void in(SinhVien ds[], int n) {
    // for (int i = 0; i < n; i++) {
    //     cout << ds[i].id  << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].dob << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    // }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].id  << " " << v[i].name << " " << v[i].lop << " " << v[i].dob << " " << fixed << setprecision(2) << v[i].gpa << endl;
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
    return 0;
}