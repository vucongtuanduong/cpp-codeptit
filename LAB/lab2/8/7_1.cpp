/*
Passcode có thể hiểu là một chuỗi các ký tự(số hoặc chữ) được sử dụng để cài đặt cho máy tính bảng làm mật khẩu truy cập khi mở máy. Hầu hết những thiết bị iOS hiện nay đều được trang bị loại mã này. Passcode sẽ giúp cho chủ nhân của thiết bị bảo mật những thông tin ở trên máy, và nếu như có ai đó muốn sử dụng iPad thì phải được sự đồng ý của chủ nhân nó.

Đối với dạng passcode đơn giản (Chỉ bao gồm 4-6 chữ số). Để lưu trữ passcode mở khóa một cách an toàn, tránh bị đọc bởi một chương trình bên thứ ba. Passcode được mã hóa và lưu trữ theo quy tắc như sau.

0-A, 1-B, 2-C, … 9-J,

Hoặc 0-K, 1-L, …, 9-T 

Các chữ số được mã hóa thành dạng ký tự sau đó chèn thêm các chữ số khác để làm rối.

Cho một passcode và một đoạn passcode đã được mã hóa. Hãy kiểm tra xem passcode đó có khớp với chuỗi đã được mã hóa không. Nếu có in ra YES, ngược lại in ra NO.

Input:

Dòng đầu tiên cho số N là số passcode cần kiểm tra.

N dòng tiếp theo bao gồm passcode cần kiểm tra và passcode đã mã hóa (cách nhau bởi một khoảng trống)

Output

Ví dụ:

Input

Output

3
1234 234DFAA4592
1234 234BC2DE4592
126152 35345AGDGKG

 

NO
YES
NO
*/
#include <iostream>
#include <string>
using namespace std;
string standardise(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            res += (s[i] + 'A' - '0');
        } 
    }
    return res;
}
string standardise1(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            res += (s[i] + 'A' - '0');
        } 
    }
    return res;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        s1 = standardise(s1);
        s2 = standardise1(s2);
        if (s1 == s2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
//         temp[i] = tolower(temp[i]);