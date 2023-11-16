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
    fileKh >> N;
    fileMh >> M;
    fileHd >> K;
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
    // for (auto x: khString) {
    //     cout << x << endl;
    // }
    // for (auto x: mhString) {
    //     cout << x << endl;
    // }
    // for (auto x: hdString) {
    //     cout << x << endl;
    // }
    fileKh.close();
    fileMh.close();
    fileHd.close();
    // N = stoi(khString[0]);
    // M = stoi(mhString[0]);
    // K = stoi(hdString[0]);
    // cout << N << " " << M << " " << K << endl;
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
        if (khString[currentKh] == " ") {
            currentKh++;
        }
        dskh[i].khName = khString[currentKh];
        currentKh++;
        if (khString[currentKh] == " ") {
            currentKh++;
        }
        dskh[i].gender = khString[currentKh];
        currentKh++;
        if (khString[currentKh] == " ") {
            currentKh++;
        }
        dskh[i].dob = khString[currentKh];
        currentKh++;
        if (khString[currentKh] == " ") {
            currentKh++;
        }
        dskh[i].address = khString[currentKh];
        currentKh++;
        khMap[dskh[i].khId] = dskh[i];
        // cout << dskh[i].khId << endl;
        // cout << dskh[i].khName << endl;
        // cout << dskh[i].gender << endl;
        // cout << dskh[i].dob << endl;
        // cout << dskh[i].address << endl;

    }

    
    for(i=0;i<M;i++) {
        string temp = to_string(demMh);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        dsmh[i].mhId += temp;
        demMh++;
        if (mhString[currentMh] == " ") {
            currentMh++;
        }
        dsmh[i].mhName = mhString[currentMh];
        currentMh++;
        if (mhString[currentMh] == " ") {
            currentMh++;
        }
        dsmh[i].donvi = mhString[currentMh];
        currentMh++;
        if (mhString[currentMh] == " ") {
            currentMh++;
        }
        dsmh[i].buyPrice = stoi(mhString[currentMh]);
        currentMh++;
        if (mhString[currentMh] == " ") {
            currentMh++;
        }
        dsmh[i].sellPrice = stoi(mhString[currentMh]);
        currentMh++;
        mhMap[dsmh[i].mhId] = dsmh[i];
        // cout << dsmh[i].mhId << endl;
        // cout << dsmh[i].mhName << endl;
        // cout << dsmh[i].donvi << endl;
        // cout << dsmh[i].buyPrice << endl;
        // cout << dsmh[i].sellPrice << endl;
    }
    
    for(i=0;i<K;i++) {
        string temp = to_string(demHd);
        while (temp.size() != 3) {
            temp = "0" + temp;
        }
        dshd[i].hdId += temp;
        demHd++;
        if (hdString[currentHd] == " ") {
            currentHd++;
        }
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
        // cout << dshd[i].hdId << endl;
        // cout << dshd[i].khId << endl;
        // cout << dshd[i].mhId << endl;
        // cout << dshd[i].quantity << endl;
        // cout << dshd[i].thanhtien << endl;
        // cout << dshd[i].profit << endl;

    }


    for(i=0;i<K;i++) {
        cout << dshd[i].hdId << " " << khMap[dshd[i].khId].khName << " " << khMap[dshd[i].khId].address << " " << mhMap[dshd[i].mhId].mhName << " " << mhMap[dshd[i].mhId].donvi << " " << mhMap[dshd[i].mhId].buyPrice << " " << mhMap[dshd[i].mhId].sellPrice << " " << dshd[i].quantity << " " << dshd[i].thanhtien << endl;
    }

    
    return 0;
}