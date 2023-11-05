/*
Trong đầu năm 2020, do ảnh hưởng của dịch Covid-19, chính phủ thực hiện giãn cách xã hội, hai bạn Tít và Mít phải hạn chế gặp mặt nhau nên các bạn định trao đổi thông tin bằng cách viết thư. Do lo ngại thư bị xem nội dung trong lúc được chuyển đi nên hai bạn đã nghĩ ra một quy ước chung để mã hóa nội dung thư không cho người khác đọc được. Để thực hiện điều trên các bạn đã quy ước mã hóa như sau:

Các chữ cái in hoa sẽ được tịnh tiến thêm 2 đơn vị quay vòng, ví dụ như A->C, B->D, … Y->A, Z->B

Các chữ cái in thường sẽ được theo quy tắc ngược lại giảm đi 2 đơn vị, ví dụ như a->y, b->z, … y->w, z->x.

Riêng các số và ký tự khác trong thư thì được giữ nguyên.

Hãy giúp hai bạn Tít và Mít viết chương trình giải mã nội dung thư đã được mã hóa để thuận tiện trong quá trình trao đổi thông tin.

Input:

Nội dung bức thư đã được mã hóa được viết trên một dòng (S).

S thỏa mãn 0 < length(S) < 1000;

Output:

Nội dung bức thư đã được giải mã

Input

Output

Jmk lyw rfg E++

Hom nay thi C++
*/
#include <iostream>
#include <string>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            // cout << s[i] << ' ';
            s[i] = (s[i] - 'A' - 2) % 26 + 'A';
            // cout << s[i] << " ";
            // cout << endl;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            // cout << s[i] << " ";
            s[i] = (s[i] - 'a' + 2) % 26 + 'a';
            // cout << s[i] << " ";
            // cout << endl;
        }
    }
    cout << s;
}
