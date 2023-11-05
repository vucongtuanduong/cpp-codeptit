/*
Ngân hàng TechcomBank có chương trình ưu đãi đặc biệt dành cho các khách hàng có chi tiêu từ 100 triệu một tháng trở lên. Hãy giúp ngân hàng lọc danh sách các khách hàng đủ điều kiện nhận ưu đãi.

Input

Dòng đầu tiên đưa vào số lượng bộ test T.

Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 3 dòng, dòng thứ nhất là họ tên khách hàng(S). Dòng thứ hai số nguyên T là số lượt giao dịch. Dòng thứ 3 gồm giá trị các giao dịch Ti, giao dịch có giá trị âm là số tiền chi tiêu, giao dịch có giá trị dương là số tiền nhận vào.

T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤100

T, Ti thỏa mãn ràng buộc T < 104, -10­­9 < Ti < 10­­9

Output

Đưa ra kết quả khách hàng có thuộc diện ưu đãi không, nếu có in ra YES, nếu không in ra NO theo từng dòng.

Input:

Output:

1
Nguyen Van Nam
5
100000 5000000 -1000000 -2000000 -10000

NO
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum += x;
        }
        if (sum <= -100000000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cin.ignore();
        // cout << s << endl;
        // cout << sum << endl;
    }
    return 0;
}