/*
Mùa khô ở miền Nam được coi là thời điểm tốt nhất để đến thăm quan. Khi đó mặt trời chiếu gần như cả ngày, bầu trời trong xanh, rực rỡ, không khí trong lành, nhiệt độ khô ráo, độ ẩm thấp.

Miền khí hậu phía Nam Việt Nam gồm phần lãnh thổ thuộc Tây Nguyên và Nam Bộ. Miền Nam nằm trong vùng có khí hậu nhiệt đới xavan với 2 mùa rõ rệt là mùa mưa và mùa khô.

Mùa khô thường bắt đầu vào tháng 11 và kết thúc vào tháng 4. Trong đó thời điểm cuối tháng 2 đến tháng 5 thời tiết hơi nóng và ẩm ướt hơn. Nhiệt độ trung bình trong thời gian này là 23 đến 38 độ C, độ ẩm thấp. Tùy từng năm mà mùa khô ở miền Nam đến sớm hơn hoặc muộn hơn một chút. Trong mùa này, khu vực gần như không mưa hoặc rất hiếm khi mưa.

Miền Bắc có khí hậu cận nhiệt đới ẩm: Miền Bắc nằm ở vĩ độ cao hơn miền Nam nên chịu ảnh hưởng mạnh mẽ của gió mùa Đông Bắc, trong khi đó gió mùa Đông Bắc càng vào Nam càng suy yếu. Với đặc trưng của kiểu khí hậu cận nhiệt đới ẩm, miền bắc sẽ có mùa đông lạnh và mùa hè nóng. Tức là vào mùa hè miền bắc nóng hơn miền nam, và vào mùa đông miền bắc lạnh hơn miền nam. Khí hậu có sự phân biệt khá rõ rệt.

Một năm có 12 tháng thì 4 mùa Miền Bắc được biểu hiện như sau:

    Mùa xuân: bắt đầu từ tháng 2 tới tháng 4.

    Mùa hè: từ tháng 5 đến tháng 7.

    Mùa thu: từ tháng 8 đến tháng 10.

    Mùa đông: từ tháng 11 đến 1 năm sau.

Gọi ngày 1/1 của năm là ngày 1 của năm, Hãy tính xem ngày thứ N của năm, hãy cho biết mùa tương ứng.

Input:

Dòng đầu tiên cho số T là số bộ test

Mỗi bộ test gồm 2 dòng, dòng thứ nhất cho biết vị trí địa lý (Bac / Nam)

Dòng thứ 2 cho năm và ngày thứ N trong năm

Output:

In ra mùa tương ứng (Xuan / He / Thu / Dong / Mua / Kho)

Input

Output

2

Bac

2022 35

Nam

2022 35

Xuan

Kho
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n;
        int year;
        cin >> year;
        cin >> n;
        if (year % 4 == 0) {
            if (s == "Bac") {
                if (n >= 214 && n <= 305) {
                    cout << "Thu" << endl;
                }
                else if (n >= 32 && n <= 121) {
                    cout << "Xuan" << endl;
                }
                else if (n >= 122 && n <= 213) {
                    cout << "Ha" << endl;
                }
                else {
                    cout << "Dong" << endl;
                }
            } else if (s == "Nam") {
                if (n <= 121 || n >= 306) {
                    cout << "Kho\n";
                } else {
                    cout << "Mua\n";
                }
            }
            
        }
        else {
            if (s == "Bac") {
                if (n >= 213 && n <= 304) {
                    cout << "Thu" << endl;
                }
                else if (n >= 31 && n <= 120) {
                    cout << "Xuan" << endl;
                }
                else if (n >= 121 && n <= 212) {
                    cout << "Ha" << endl;
                }
                else {
                    cout << "Dong" << endl;
                }
            } else if (s == "Nam") {
                if (n <= 120 || n >= 305) {
                    cout << "Kho\n";
                } else {
                    cout << "Mua\n";
                }
            }
        }
        
    }
    return 0;
}