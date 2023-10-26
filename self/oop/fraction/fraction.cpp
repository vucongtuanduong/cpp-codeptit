#include <iostream>
#include <algorithm>
using namespace std;
class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        void rutGon() {
            int gcd = __gcd(numerator, denominator);
            numerator /= gcd;
            denominator /= gcd;
            if (denominator < 0) {
                numerator *= -1;
                denominator *= -1;
            }
        }
        Fraction cong(Fraction x) {
            Fraction sum;
            int bcnn =  denominator * x.denominator / __gcd(denominator, x.denominator);
            sum.denominator = bcnn;
            sum.numerator = numerator * (bcnn / denominator) + x.numerator * (bcnn / x.denominator);
            sum.rutGon();
            return sum;
        }
        Fraction operator+(Fraction other) {
            Fraction sum = *this;
            int bcnn = denominator * other.denominator / __gcd(other.denominator, denominator);
            int a1 = bcnn / denominator;
            int a2 = bcnn / other.denominator;
            sum.denominator = bcnn;
            sum.numerator = numerator * a1 + other.numerator * a2;
            sum.rutGon();
            return sum;
        }
        Fraction operator - (Fraction other) {
            Fraction sub;
            int bcnn = denominator * other.denominator / __gcd(other.denominator, denominator);
            int a1 = bcnn / denominator;
            int a2 = bcnn / other.denominator;
            sub.denominator = bcnn;
            sub.numerator = numerator * a1 - other.numerator * a2;
            sub.rutGon();
            return sub;
        }
        Fraction operator * (Fraction other) {
            Fraction product;
            product.numerator = numerator * other.numerator;
            product.denominator = denominator * other.denominator;
            product.rutGon();
            return product;
        }
        Fraction operator / (Fraction other) {
            Fraction div;
            div.numerator = numerator * other.denominator;
            div.denominator = denominator * other.numerator;
            div.rutGon();
            return div;
        }
        friend istream & operator >> (istream &in, Fraction &a) {
            in >> a.numerator >> a.denominator;
            return in;
        }
        friend ostream & operator << (ostream &out, Fraction a) {
            out << a.numerator << "/" << a.denominator;
            return out;
        }
};
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    Fraction a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " <<  a + b << endl;
    cout << a << " - " << b << " = " <<  a - b << endl;
    cout << a << " * " << b << " = " <<  a * b << endl;
    cout << a << " / " << b << " = " <<  a / b << endl;
    cout << "Cach khac: \n";
    Fraction ps3 = a.cong(b);
    cout << a << " + " << b << " = " <<  ps3 << endl;
}