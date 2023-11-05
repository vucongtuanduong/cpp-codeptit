/*
Khu dân cư ABC tiến hành bầu tổ trưởng dân phố. Có M ứng viên và N cử tri. Người dân trong khu dân cư đã chán ngấy với việc các ứng viên vận động tranh cử, câu kéo phiếu bầu trong các nhiệm kỳ trước nên họ quyết định đặt ra quy định mới như sau:

Các ứng viên được đánh số từ 1 tới M. Mỗi cử tri sẽ viết ra đúng 1 số thứ tự ứng viên mình muốn chọn và bỏ vào hòm phiếu.
Người trúng cử là người có số phiếu bầu nhiều thứ hai
Nếu không có người đứng thứ hai thì kết quả bầu cử sẽ bị hủy bỏ
Nếu có nhiều hơn 1 người cùng có số phiếu nhiều thứ hai thì người nào có số thứ tự nhỏ nhất sẽ được chọn.
Viết chương trình xác định người trúng cử.

Input

Dòng đầu ghi hai số N và M (1 < M < 10, 5 < N < 500).

Dòng thứ 2 ghi N giá trị trong các phiếu bầu. Các giá trị đảm bảo hợp lệ (tức là từ 1 đến M).

Output

Ghi ra số thứ tự của người trúng cử.

Hoặc nếu không có ai trúng cử thì ghi ra NONE

Ví dụ

Input

Output

10 4

2 3 1 2 3 4 1 2 3 2

3

8 4

1 2 3 4 4 3 2 1

NONE
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    vector<int> a(m+1,0);
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x]++;
    }
    int max = 0;
    int max2 = 0;
    int index = 0;
    for (int i = 1; i <= m; i++){
        if (a[i] > max){
            max2 = max;
            max = a[i];
            index = i;
        }
        else if (a[i] > max2 && a[i] < max){
            max2 = a[i];
        }
    }
    if (max2 == 0){
        cout << "NONE";
    }
    else{
        cout << index;
    }
    return 0;
}