//cpp0632
#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;

int demKh = 1;
int demMh = 1;
int demHd = 1;

map<string, KhachHang> khMap;
map<string, MatHang> mhMap;

class KhachHang{
    public:
        string khId = "KH";
        string khName;
        string gender;
        string dob;
        string address;
};

class MatHang{
    public:
        string mhName;
        string mhId = "MH";
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
        int profit;
        int thanhtien;
};          


int main  (){ 

    KhachHang dskh[1000];
    MatHang dsmh[100];
    HoaDon dshd[1005];

    fstream fileKh, fileMh, fileHd;
    fileKh.open("KH.in");
    fileMh.open("MH.in");
    fileHd.open("HD.in");
    int N,M,K,i;
    vector<string> khString;
    vector<string> mhString;
    vector<string> hdString;
    string temp;
    while (getline(fileKh, temp)) {
        khString.push_back(temp);
    }
    while (getline(fileMh, temp)) {
        mhString.push_back(temp);
    }
    while (getline(fileHd, temp)) {
        hdString.push_back(temp);
    }
    fileKh.close();
    fileMh.close();
    fileHd.close();
    N = stoi(khString[0]);
    M = stoi(mhString[0]);
    K = stoi(hdString[0]);
    int currentKh = 1;
    int currentMh = 1;
    int currentHd = 1;
    for(i=0;i<N;i++) {
        string temp = to_string(demKh);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        dskh[i].khId += temp;
        demKh++;
        dskh[i].khName = khString[currentKh];
        currentKh++;
        dskh[i].gender = khString[currentKh];
        currentKh++;
        dskh[i].dob = khString[currentKh];
        currentKh++;
        dskh[i].address = khString[currentKh];
        currentKh++;
        khMap[dskh[i].khId] = dskh[i];

    }

    
    for(i=0;i<M;i++) {
        string temp = to_string(demMh);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        dsmh[i].mhId += temp;
        demMh++;
        
        dsmh[i].mhName = mhString[currentMh];
        currentMh++;
        
        dsmh[i].donvi = mhString[currentMh];
        currentMh++;
        
        dsmh[i].buyPrice = stoi(mhString[currentMh]);
        currentMh++;
        
        dsmh[i].sellPrice = stoi(mhString[currentMh]);
        currentMh++;
        
        mhMap[dsmh[i].mhId] = dsmh[i];
    }
    
    for(i=0;i<K;i++) {
        string temp = to_string(demHd);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        dshd[i].hdId += temp;
        demHd++;
        string tempHd = hdString[currentHd];
        currentHd++;
        stringstream ss(tempHd);
        string tam;
        vector<string> tokens;
        while (ss >> tam) {
            tokens.push_back(tam);
        }
        dshd[i].khId = tokens[0];
        dshd[i].mhId = tokens[1];
        dshd[i].quantity = stoi(tokens[2]);

        dshd[i].thanhtien = mhMap[dshd[i].mhId].sellPrice * dshd[i].quantity;
        dshd[i].profit = dshd[i].thanhtien - mhMap[dshd[i].mhId].buyPrice * dshd[i].quantity;

    }


    for(i=0;i<K;i++) {
        cout << dshd[i].hdId << " " << khMap[dshd[i].khId].khName << " " << khMap[dshd[i].khId].address << " " << mhMap[dshd[i].mhId].mhName << " " << mhMap[dshd[i].mhId].donvi << " " << mhMap[dshd[i].mhId].buyPrice << " " << mhMap[dshd[i].mhId].sellPrice << " " << dshd[i].quantity << " " << dshd[i].thanhtien << endl;
    }

    
    return 0;
}