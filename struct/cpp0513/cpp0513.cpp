#include <iostream>
#include <iomanip>
using namespace std;
struct SinhVien {
    string id = "B20DCCN0", name, lop, dob;
    float gpa;
} ;
void nhap(SinhVien ds[], int n) {
    
	for (int i = 0; i < n; i++) {
        string id_temp = to_string(i + 1);
        if (id_temp.size() == 1) {
            id_temp = "0" + id_temp;
        }
        ds[i].id += id_temp;
        cin.ignore();
        getline(cin, ds[i].name);
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
    for (int i = 0; i < n; i++) {
        cout << ds[i].id  << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].dob << " " << fixed << setprecision(2) << ds[i].gpa << endl;
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
    in(ds, N);
    return 0;
}