#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
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
using namespace std;
int dem = 1;
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
struct ThiSinh{
        string id = "TS";
        string name;
        double score;
        string people;
        int area;
        string result;
        
        
};
void add_score(ThiSinh &ts) {
    if (ts.people != "Kinh") {
        ts.score += 1.5;
    }
    if (ts.area == 1) {
        ts.score += 1.5;
    } else if (ts.area == 2) {
        ts.score += 1.0;
    }
}
void read ( ThiSinh & ts) {
    cin.ignore();
    getline(cin, ts.name);
    cin >> ts.score >> ts.people >> ts.area;
    ts.name = standardise(ts.name);
    add_score(ts);
    string temp = to_string(dem);
    if (temp.size() == 1) {
        temp = "0" + temp;
    }
    ts.id += temp;
    if (ts.score >= 20.5) {
        ts.result = "Do";
    } else {
        ts.result = "Truot";
    }

}
void print ( ThiSinh & ts) {
    cout << ts.id <<" " << ts.name << " " << ts.score << " " << ts.result << endl;

}
bool cmp(ThiSinh a, ThiSinh b) {
    if (a.score == b.score) {
        return a.id < b.id;
    }
    return a.score > b.score;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;

    vector<ThiSinh> thisinh(n);
    for (int i = 0; i < n; i++) {
        ThiSinh ts;
        read(ts);
        dem++;
        thisinh.push_back(ts);
    }
    sort(thisinh.begin(), thisinh.end(), cmp);
    for (int i = 0; i < n; i++) {
        print(thisinh[i]);
    }
}
