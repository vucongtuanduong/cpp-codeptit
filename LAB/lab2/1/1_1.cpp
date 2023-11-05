/*
Địa chỉ IP (IP là viết tắt của từ tiếng Anh: Internet Protocol - giao thức Internet) là một địa chỉ đơn nhất mà những thiết bị điện tử hiện nay đang sử dụng để nhận diện và liên lạc với nhau trên mạng máy tính bằng cách sử dụng giao thức Internet.

Bất kỳ thiết bị mạng nào bao gồm bộ định tuyến, bộ chuyển mạch mạng, máy vi tính, máy chủ hạ tầng (như NTP, DNS, DHCP, SNMP, v.v.), máy in, máy fax qua Internet, và vài loại điện thoại—tham gia vào mạng đều có địa chỉ riêng, và địa chỉ này là đơn nhất trong phạm vi của một mạng cụ thể. Vài địa chỉ IP có giá trị đơn nhất trong phạm vi Internet toàn cầu, trong khi một số khác chỉ cần phải đơn nhất trong phạm vi một công ty.

Ipv4 viết tắt cho Internet Protocol Version 4, dịch ra có nghĩa là giao thức Internet phiên bản thứ 4. Ipv4 đã được bộ quốc phòng Hoa Kỳ chuẩn hóa trong bản MIL-STD-1777. Giao thức Internet IP đã trải qua nhiều phiên bản khác nhau và phiên bản Ipv4 là phiên bản đầu tiên được sử dụng rộng rãi trên toàn thế giới và hiện vẫn còn đang là nòng cốt của Internet trên toàn thế giới.

Để hiểu địa chỉ Ipv4 là gì có thể lấy ví dụ như sau: Giả sử ta có 1 dải số như sau: 172.16.254.1. Dải số này có thể được dùng để đặt tên cho 1 địa chỉ Ipv4 nào đó. Có thể thấy địa chỉ Ipv4 có tổng cộng 4 số và mỗi số phải nằm trong giới hạn từ 0-255.

Cho một danh sách các chuỗi ký tự, hãy kiểm tra xem chuỗi ký tự này có phải địa chỉ IP hợp lệ hay không.

Input:

Dòng đầu tiên cho số T là số bộ test

T dòng tiếp theo mỗi dòng là một chuỗi bất kỳ có độ dài < 1000

Output:

In ra kết quả theo từng dòng

Input:

Output:

2

192.168.1.1

256.255.255.255

YES

NO
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool check(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            count++;
        }
    }
    if (count != 3) {
        return false;
    }
    vector<string> v;
    string tmp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '.') {
            tmp += s[i];
        }
        else {
            v.push_back(tmp);
            tmp = "";
        }
    }
    v.push_back(tmp);
    if (v.size() != 4) {
        return false;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i].length() > 3) {
            return false;
        }
        if (v[i].length() > 1 && v[i][0] == '0') {
            return false;
        }
        int tmp = 0;
        for (int j = 0; j < v[i].length(); j++) {
            if (v[i][j] < '0' || v[i][j] > '9') {
                return false;
            }
            tmp = tmp * 10 + (v[i][j] - '0');
        }
        if (tmp < 0 || tmp > 255) {
            return false;
        }
    }
    return true;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (check(s)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}