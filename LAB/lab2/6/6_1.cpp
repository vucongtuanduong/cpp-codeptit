/*
Theo quy định mới, điểm tuyển sinh vào trường đại học XYZ sau khi tính tổng sẽ được cộng ưu tiên, cụ thể:

Thí sinh khu vực 1 ưu tiên 1.5 điểm
Thí sinh khu vực 2 ưu tiên 1 điểm
Thí sinh khu vực 3 không ưu tiên
Thí sinh dân tộc Kinh không ưu tiên
Thí sinh các dân tộc khác ưu tiên 1.5 điểm
Hãy tính tổng điểm đã ưu tiên và xác định tình trạng trúng tuyển. Biết điểm chuẩn của trường năm nay là 20.5 điểm.

Input

Dòng đầu ghi số thí sinh.

Mỗi thí sinh ghi trên 4 dòng gồm:

Họ tên: có thể chưa chuẩn hóa
Điểm thi: giá trị số thực không quá 30
Dân tộc
Khu vực
Output

Ghi ra danh sách đã sắp xếp theo tổng điểm (đã tính ưu tiên) giảm dần, nếu tổng điểm bằng nhau thì sắp xếp theo mã thí sinh tăng dần. Các thông tin cần liệt kê gồm:

Mã thí sinh (tính theo thứ tự nhập từ TS01)
Họ tên đã chuẩn hóa
Tổng điểm với đúng 1 chữ số phần thập phân
Trạng thái: Do hoặc Truot
Ví dụ

Input

Output

2

Nguyen  hong ngat

22

Kinh

1

  Chu thi MINh

14

Dao

3

TS01 Nguyen Hong Ngat 23.5 Do

TS02 Chu Thi Minh 15.5 Truot

 
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
using namespace std;
int dem = 1;
struct ThiSinh {
    string id;
    string name;
    double score;
    string danToc;
    int khuVuc;
    double tongDiem;
    string trangThai;
};
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
    string temp, res = "";
    while (ss >> temp) {
        temp[0] = toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++) {
            temp[i] = tolower(temp[i]);
        }
        res = res + temp + " ";
    }
    res.pop_back();
    return res;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int n;
    cin >> n;
    vector<ThiSinh> a;
    for (int i = 0; i < n; i++) {
        ThiSinh tmp;
        cin.ignore();
        getline(cin, tmp.name);
        cin >> tmp.score;
        cin.ignore();
        getline(cin, tmp.danToc);
        cin >> tmp.khuVuc;
        tmp.tongDiem = tmp.score;
        if (tmp.danToc != "Kinh") {
            tmp.tongDiem += 1.5;
        }
        if (tmp.khuVuc == 1) {
            tmp.tongDiem += 1.5;
        }
        else if (tmp.khuVuc == 2) {
            tmp.tongDiem += 1;
        }
        if (tmp.tongDiem >= 20.5) {
            tmp.trangThai = "Do";
        }
        else {
            tmp.trangThai = "Truot";
        }
        tmp.name = standardise(tmp.name);
        string temp = to_string(dem);
        if (temp.size() == 1) {
            temp = "0" + temp;
        }
        tmp.id = "TS" + temp;
        dem++;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), [](ThiSinh a, ThiSinh b) {
        if (a.tongDiem == b.tongDiem) {
            return a.id < b.id;
        }
        return a.tongDiem > b.tongDiem;
    });
    for (int i = 0; i < a.size(); i++) {
        cout << a[i].id << " " << a[i].name << " " << fixed << setprecision(1) << a[i].tongDiem << " " << a[i].trangThai << endl;
    }

    return 0;
}