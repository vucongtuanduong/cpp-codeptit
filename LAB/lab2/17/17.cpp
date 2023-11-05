/*
Cuộc thi P-STARTUP "Ý tưởng sáng tạo khởi nghiệp hướng tới Ngày Chuyển đổi số vì cộng đồng 2022” với Chủ đề Công nghệ cho cuộc sống (AI For Life)

Đối tượng tham gia: sinh viên PTIT tại các cơ sở đào tạo HN và HCM.

Lễ Phát Động cuộc thi P-STARTUP 2022 vào Chiều 14h00 Ngày 07/10/2022

Địa điểm: tại Hội trường A2

Tiêu chí tính điểm vòng loại dựa trên lượng bình chọn tính dựa trên lượt chia sẻ (70%) và lượt tương tác khác (30%).

Cho danh sách các ý tưởng dự thi và lượng tương tác thống kê từ mạng xã hội. 7 ý tưởng xuất sắc nhất sẽ được lựa chọn vào vòng chung kết.

Hãy liệt kê danh sách các ý tưởng vào vòng chung kết. Sắp xếp theo thứ tự kết quả từ cao xuống thấp.

Trường hợp bằng điểm, ưu tiên ý tưởng đăng ký sớm (mã nhỏ hơn)

Input

Dòng đầu tiên cho số ý tưởng dự thi

Các dòng tiếp theo cho thông tin ý tưởng bao gồm mã, số lượt share, và số lượt tương tác khác. Các số đều <109

Output: In kết quả là danh sách mã ý tưởng.

Input

Output

10

1 10 2

2 5 7

3 20 100

4 10 20

5 100 70

6 1 1

7 0 2

8 2 0

9 10 11

10 12 13

5 3 4 10 9
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct Idea{
    int id;
    double share;
    double interact;
};
bool cmp(Idea a, Idea b) {
    if (a.share + a.interact == b.share + b.interact) {
        return a.id < b.id;
    }
    return a.share + a.interact > b.share + b.interact;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int n;
    cin >> n;
    vector<Idea> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].share >> a[i].interact;
        a[i].share *= 0.7;
        a[i].interact *= 0.3;
    }
    sort(a.begin(), a.end(), [](Idea a, Idea b) {
        if (a.share + a.interact == b.share + b.interact) {
            return a.id < b.id;
        }
        return a.share + a.interact > b.share + b.interact;
    });
    sort(a.begin(), a.begin() + 7, [](Idea a, Idea b) {
        return a.id < b.id;
    });
    for (int i = 0; i < 7; i++) {
        cout << a[i].id << " ";
    }
    return 0;
}