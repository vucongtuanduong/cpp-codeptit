/*
Một câu trong văn bản được hiểu là dãy ký tự (có cả khoảng trống) cho đến khi gặp dấu ngắt câu hoặc xuống dòng (tức là đôi khi người ta quên viết dấu ngắt câu nhưng cứ xuống dòng là sang một câu mới). Các dấu ngắt câu trong bài toán này bao gồm: dấu chấm (.), dấu chấm cảm (!), dấu chấm hỏi (?).

Hãy viết chương trình chuẩn hóa các câu trong dữ liệu vào với các yêu cầu sau:

Ký tự đầu mỗi câu viết hoa, các ký tự khác viết thường.
Các từ cách nhau đúng một khoảng trống.
Tự động điền thêm dấu chấm (.) nếu xuống dòng mà chưa có dấu ngắt câu.
Dấu ngắt câu phải viết sát ký tự cuối cùng của câu (không tính khoảng trống)
Input

Một văn bản không quá 100 dòng.

Output

Ghi ra các câu đã chuẩn hóa, mỗi câu 1 dòng.

Ví dụ

Input

Chuong trinh Dao Tao CLC nganh CNTT duoc Thiet     Ke theo chuan quoc te.

co 03 chuyen nganh la: Cong  nghe phan mem, Tri tue nhan tao va An toan thong tin

muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep

moi    CAC BAN danG ky     thaM giA !

Output

Chuong trinh dao tao clc nganh cntt duoc thiet ke theo chuan quoc te.

Co 03 chuyen nganh la: cong  nghe phan mem, tri tue nhan tao va an toan thong tin.

Muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep.

Moi cac ban dang ky tham gia!
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main ( ){
    string s;
    vector<string> v;
    while (getline(cin,s)){
        v.push_back(s);
    }
    for (int i=0;i<v.size();i++){
        if (v[i].length()==0) continue;
        if (v[i][0]>='a' && v[i][0]<='z') v[i][0]-=32;
        for (int j=1;j<v[i].length();j++){
            if (v[i][j]>='A' && v[i][j]<='Z') v[i][j]+=32;
        }
        while (v[i][v[i].length()-1]==' ') v[i].erase(v[i].length()-1,1);
        if (v[i][v[i].length()-1]!='.' && v[i][v[i].length()-1]!='!' && v[i][v[i].length()-1]!='?') v[i]+='.';
    }
    for (int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}