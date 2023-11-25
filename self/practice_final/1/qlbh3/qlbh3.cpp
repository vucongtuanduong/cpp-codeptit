
//AC
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int demKh = 1;
int demMh = 1;
int demHd = 1;




class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> khMap;
map<string, MatHang> mhMap;

class KhachHang{
    public:
        string khId = "KH";
        string khName;
        string gender;
        string address;
        string dob;
        
};

class MatHang{
    public:
        string mhId = "MH";
        string mhName;
        string donvi;
        int buyPrice;
        int sellPrice;
};

class HoaDon{
    public:
        string hdId = "HD";
        string khId;
        string mhId;
        int quantity;
        int thanhtien;
};
int main () {
    // #ifndef ONLINE_JUDGE
    // freopen("output.txt", "w", stdout);
    // #endif
    fstream fileKh, fileMh, fileHd;
    fileKh.open("KH.in");
    fileMh.open("MH.in");
    fileHd.open("HD.in");
    string temp;
    vector<string> khString, mhString, hdString;
    while(getline(fileKh, temp)) {
        khString.push_back(temp);
    }
    while(getline(fileMh, temp)) {
        mhString.push_back(temp);
    }
    while(getline(fileHd, temp)) {
        hdString.push_back(temp);
    }
    fileKh.close();
    fileMh.close();
    fileHd.close();
    int n,m,k;
    n = stoi(khString[0]);
    m = stoi(mhString[0]);
    k = stoi(hdString[0]);

    vector<KhachHang> dskh;
    vector<MatHang> dsmh;
    vector<HoaDon> dshd;

    int currentKh = 1;
    int currentHd = 1;
    int currentMh = 1;

    while(currentKh < khString.size()) {
        KhachHang x;
        string temp = to_string(demKh);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        demKh++;
        x.khId+= temp;
        x.khName = khString[currentKh++];
        x.gender = khString[currentKh++];
        x.dob = khString[currentKh++];
        x.address = khString[currentKh++];
        dskh.push_back(x);
        khMap[x.khId] = x;
        // cout << x.khId << endl;
        // cout << x.khName << endl;
        // cout << x.gender << endl;
        // cout << x.dob << endl;
        // cout << x.address << endl;
    }
    while (currentMh < mhString.size()) {
        MatHang x;
        string temp = to_string(demMh);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        demMh++;
        x.mhId += temp;
        x.mhName = mhString[currentMh++];
        x.donvi = mhString[currentMh++];
        x.buyPrice = stoi(mhString[currentMh++]);
        x.sellPrice = stoi(mhString[currentMh++]);
        dsmh.push_back(x);
        mhMap[x.mhId] = x;

        // cout << x.mhId << " " << x.mhName << " " << x.donvi << " " << x.buyPrice << " " << x.sellPrice << endl;
    }
    while (currentHd < hdString.size()) {
        HoaDon x;
        string temp = to_string(demHd);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        demHd++;
        x.hdId += temp;
        


        string now = hdString[currentHd++];
        stringstream ss(now);
        int dem = 0;
        string tmp;
        while (ss >> tmp) {
            if (dem == 0) {
                x.khId =  tmp;
                dem++;
            } else if (dem == 1) {
                x.mhId = tmp;
                dem++;
            } else if (dem == 2) {
                x.quantity = stoi(tmp);
                dem++;
            }
        }
        x.thanhtien = x.quantity * mhMap[x.mhId].sellPrice;
        dshd.push_back(x);
        // cout << x.hdId << " " << x.khId << " " << x.mhId << " " << x.quantity << " " << x.thanhtien << endl;
    }
    for (int i = 0; i < dshd.size(); i++) {
        HoaDon x = dshd[i];
        cout << x.hdId << " " << khMap[x.khId].khName << " " << khMap[x.khId].address << " " << mhMap[x.mhId].mhName << " " << mhMap[x.mhId].donvi << " " << mhMap[x.mhId].buyPrice << " " << mhMap[x.mhId].sellPrice << " " << x.quantity << " " << x.thanhtien << endl;
    }
}