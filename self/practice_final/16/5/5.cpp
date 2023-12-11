#include <bits/stdc++.h>
using namespace std;
class Author;
class Book;
bool cmp(Book a, Book  b) ;
class Author{
    public:
        string name;
        string email;
        string gender;
        friend istream &operator >> (istream &in, Author &a) {
            getline(in, a.name);
            getline(in, a.email);
            getline(in, a.gender);
            return in;
        }
        friend ostream &operator << (ostream &out, Author a) {
            out << "Name : " << a.name << endl;
            out << "Email : " << a.email << endl;
            out << "Gender : " << a.gender << endl; 

            return out;
        }
};
class Book{
    public:
        string name;
        vector<Author> author;
        int price;
        int qty = 0;
        friend istream &operator >> (istream &in, Book &a) {
            string rac;
            getline(in, rac);
            // cout << rac << endl;
            getline(in, a.name);
            in >> a.price >> a.qty;
            
            int m;
            in >> m;
            in.ignore();
            for (int i = 0; i < m; i++) {
                Author temp;
                in >> temp;
                a.author.push_back(temp);
            }
            return in;
        }
        friend ostream &operator << (ostream &out, Book a) {
            out << "-----------------------\n";
            out << "Book information : \n";
            out << "Name : " << a.name << endl;
            out << "Price : " << a.price << endl;
            out << "Quantity : " << a.qty << endl;
            out << "Author information : \n";
            for (int i = 0; i < a.author.size(); i++) {
                out << "#" << i + 1 << endl;
                out << a.author[i];
            }
            return out;
        } 
};
bool cmp(Book a, Book  b) {
    return a.name < b.name;
}
void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    Book *dssach = new Book[n];
    for (int i = 0; i < n; i++) {
        cin >> dssach[i];
    }
    string rac;
    getline(cin, rac);
    // cout << rac << endl;
    sort(dssach,dssach + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << dssach[i];
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    testCase();
}